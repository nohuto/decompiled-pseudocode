/*
 * XREFs of sub_1800F7544 @ 0x1800F7544
 * Callers:
 *     sub_1800F74E0 @ 0x1800F74E0 (sub_1800F74E0.c)
 * Callees:
 *     sub_18001C4DC @ 0x18001C4DC (sub_18001C4DC.c)
 *     sub_18001F450 @ 0x18001F450 (sub_18001F450.c)
 *     sub_180055288 @ 0x180055288 (sub_180055288.c)
 *     sub_18005575C @ 0x18005575C (sub_18005575C.c)
 *     ZwQueryVirtualMemory @ 0x18009CB40 (ZwQueryVirtualMemory.c)
 */

NTSTATUS __fastcall sub_1800F7544(__int64 a1)
{
  char *v2; // r14
  NTSTATUS VirtualMemory; // ebx
  _DWORD *v4; // rax
  NTSTATUS v5; // eax
  __int64 v6; // rsi
  _DWORD *i; // rsi
  _QWORD *j; // rdi
  NTSTATUS result; // eax
  int v10[2]; // [rsp+30h] [rbp-50h] BYREF
  char v11; // [rsp+40h] [rbp-40h]
  _BYTE MemoryInformation[24]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v13; // [rsp+60h] [rbp-20h]
  int v14; // [rsp+70h] [rbp-10h]
  int v15; // [rsp+C8h] [rbp+48h] BYREF
  DWORD v16; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v17; // [rsp+D8h] [rbp+58h] BYREF

  v2 = 0LL;
  do
  {
    VirtualMemory = ZwQueryVirtualMemory(
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      v2,
                      MemoryBasicInformation,
                      MemoryInformation,
                      0x30uLL,
                      0LL);
    if ( VirtualMemory < 0 )
      break;
    if ( v14 == 0x1000000 )
    {
      VirtualMemory = ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v2, MemoryImageInformation, v10, 0x18uLL, 0LL);
      if ( VirtualMemory >= 0 )
      {
        if ( *(_QWORD *)v10 )
        {
          if ( (v11 & 2) == 0 && (v11 & 1) == 0 )
          {
            v4 = sub_18001F450(*(void **)v10);
            if ( !v4 || *v4 < 0x94u || (v4[36] & 0x4000) == 0 )
            {
              v5 = sub_18001C4DC(*(unsigned __int64 *)v10, 1, 1u, &v16, &v17);
              v6 = v17;
              if ( v5 < 0 )
                v6 = 0LL;
              v17 = v6;
              if ( v6 )
              {
                for ( i = (_DWORD *)(v6 + 12); *i; i += 5 )
                {
                  for ( j = (_QWORD *)(*(_QWORD *)v10 + (unsigned int)i[1]); *j; ++j )
                  {
                    if ( *j == a1 && (unsigned int)sub_18005575C(a1, &v15) != 1 && (v15 & 0x10) != 0 )
                    {
                      result = sub_180055288(a1, 4u);
                      VirtualMemory = result;
                      if ( result >= 0 )
                        return result;
                      break;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    v2 += v13;
  }
  while ( VirtualMemory >= 0 );
  return VirtualMemory;
}
