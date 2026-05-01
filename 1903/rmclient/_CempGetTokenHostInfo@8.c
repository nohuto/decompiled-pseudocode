/*
 * XREFs of _CempGetTokenHostInfo@8 @ 0x10005D60
 * Callers:
 *     _HamQueryCallerTerminateReason@4 @ 0x10005CB0 (_HamQueryCallerTerminateReason@4.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0x1000C990 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x1000D14E (_memcpy.c)
 *     _memset @ 0x1000D154 (_memset.c)
 */

NTSTATUS __fastcall CempGetTokenHostInfo(HANDLE TokenHandle, _DWORD *a2)
{
  NTSTATUS result; // eax
  void **Heap; // ebx
  NTSTATUS TokenHostIdAsUlong64; // esi
  void *v6; // esi
  ULONG v7; // eax
  int v8; // edx
  _WORD *v9; // eax
  __int16 v10; // cx
  int v11; // [esp+10h] [ebp-250h]
  int v12; // [esp+14h] [ebp-24Ch]
  int v13; // [esp+18h] [ebp-248h]
  int v14; // [esp+1Ch] [ebp-244h]
  int v16; // [esp+24h] [ebp-23Ch] BYREF
  int v17; // [esp+28h] [ebp-238h] BYREF
  ULONG ReturnLength; // [esp+2Ch] [ebp-234h] BYREF
  _DWORD v19[139]; // [esp+30h] [ebp-230h] BYREF

  memset(v19, 0, 0x228u);
  v17 = 464;
  result = PsmGetKeyFromToken(TokenHandle, v19, &v17, 0);
  if ( result >= 0 )
  {
    result = NtQueryInformationToken(TokenHandle, TokenUser, 0, 0, &ReturnLength);
    if ( result >= 0 || result == -1073741789 )
    {
      Heap = (void **)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, ReturnLength);
      if ( Heap )
      {
        TokenHostIdAsUlong64 = NtQueryInformationToken(TokenHandle, TokenUser, Heap, ReturnLength, &ReturnLength);
        if ( TokenHostIdAsUlong64 >= 0 )
        {
          v6 = *Heap;
          memset(&v19[116], 0, 0x44u);
          v7 = RtlLengthSid(v6);
          memcpy(&v19[116], v6, v7);
          TokenHostIdAsUlong64 = NtQueryInformationToken(TokenHandle, TokenSessionId, &v19[133], 4u, &ReturnLength);
          if ( TokenHostIdAsUlong64 >= 0 )
          {
            TokenHostIdAsUlong64 = PsmQueryBackgroundActivationType(TokenHandle, &v16);
            if ( TokenHostIdAsUlong64 >= 0 )
            {
              v19[134] = 1 << v16;
              TokenHostIdAsUlong64 = RtlQueryTokenHostIdAsUlong64(TokenHandle, &v19[136]);
              if ( TokenHostIdAsUlong64 >= 0 )
              {
                v12 = v19[136];
                v11 = v19[137];
                v13 = v19[134];
                v14 = v19[133];
                memset(a2, 0, 0x228u);
                v8 = 232;
                v9 = a2;
                while ( v8 != -2147483414 )
                {
                  v10 = *(_WORD *)((char *)v9 + (char *)v19 - (char *)a2);
                  if ( !v10 )
                    break;
                  *v9++ = v10;
                  if ( !--v8 )
                  {
                    --v9;
                    break;
                  }
                }
                *v9 = 0;
                RtlCopySid(0x44u, a2 + 116, &v19[116]);
                TokenHostIdAsUlong64 = 0;
                a2[133] = v14;
                a2[134] = v13;
                a2[136] = v12;
                a2[137] = v11;
              }
            }
          }
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
        return TokenHostIdAsUlong64;
      }
      else
      {
        return -1073741801;
      }
    }
  }
  return result;
}
