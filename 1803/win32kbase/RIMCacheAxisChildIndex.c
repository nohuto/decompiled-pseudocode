/*
 * XREFs of RIMCacheAxisChildIndex @ 0x1C00EA568
 * Callers:
 *     RIMRetrieveLinkCollection @ 0x1C00EDB24 (RIMRetrieveLinkCollection.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C004DD00 (rimHidP_GetSpecificValueCaps.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

__int64 __fastcall RIMCacheAxisChildIndex(__int64 a1, struct _HIDP_PREPARSED_DATA *a2, unsigned int a3, int a4)
{
  int v6; // r12d
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rbp
  unsigned __int16 v10; // r15
  unsigned int v11; // edi
  _WORD *v12; // rax
  _WORD *v13; // r8
  unsigned __int16 v14; // r13
  __int64 v15; // rdx
  __int64 v16; // r15
  unsigned __int16 v17; // bx
  __int64 v18; // r15
  struct _HIDP_PREPARSED_DATA *v19; // r13
  USHORT v20; // cx
  __int16 v21; // cx
  unsigned __int16 v23[2]; // [rsp+40h] [rbp-D8h] BYREF
  __int16 v24; // [rsp+44h] [rbp-D4h]
  USHORT ReportCount; // [rsp+46h] [rbp-D2h]
  int v26; // [rsp+48h] [rbp-D0h]
  __int64 v27; // [rsp+50h] [rbp-C8h]
  struct _HIDP_PREPARSED_DATA *v28; // [rsp+58h] [rbp-C0h]
  __int64 v29; // [rsp+60h] [rbp-B8h]
  __int64 v30; // [rsp+68h] [rbp-B0h]
  _WORD *v31; // [rsp+70h] [rbp-A8h]
  struct _HIDP_VALUE_CAPS v32; // [rsp+80h] [rbp-98h] BYREF

  v28 = a2;
  v27 = a1;
  v6 = a4;
  v26 = a4;
  memset(&v32, 0, sizeof(v32));
  v7 = *(_QWORD *)(a1 + 672);
  v23[0] = 1;
  v8 = *(unsigned __int16 *)(v7 + 4);
  v9 = *(_QWORD *)(v7 + 16);
  v10 = *(_WORD *)(v9 + 24 * v8 + 4);
  v11 = 0;
  *(_WORD *)(v7 + 8) = 0;
  v12 = Win32AllocPoolZInit(8LL * a3, 0x77637352u);
  v31 = v12;
  v13 = v12;
  if ( v12 )
  {
    *(_QWORD *)(v7 + 24) = v12;
    v14 = 0;
    v24 = 0;
    v15 = 3LL * v10;
    v30 = v15;
    if ( *(_WORD *)(v9 + 24LL * v10 + 6) )
    {
      do
      {
        if ( !(_WORD)v8 )
          break;
        v16 = 3LL * (unsigned __int16)v8;
        v29 = v16;
        if ( *(_WORD *)(v9 + 24LL * (unsigned __int16)v8 + 6) )
        {
          if ( v26 )
          {
            v17 = *(_WORD *)(v9 + 24LL * (unsigned __int16)v8 + 10);
            if ( v17 )
            {
              v18 = v27;
              v19 = v28;
              do
              {
                v23[0] = 1;
                if ( rimHidP_GetSpecificValueCaps(HidP_Input, 1u, v17, 0x30u, &v32, v23, v19) == 1114112 )
                {
                  ReportCount = v32.ReportCount;
                  v23[0] = 1;
                  if ( rimHidP_GetSpecificValueCaps(HidP_Input, 1u, v17, 0x31u, &v32, v23, v19) == 1114112 )
                  {
                    v20 = v32.ReportCount;
                    if ( (_WORD)v8 == *(_WORD *)(v7 + 4) )
                    {
                      *(_WORD *)(v7 + 8) = v17;
                      v11 = 1;
                    }
                    *(_WORD *)(*(_QWORD *)(v7 + 24) + 8LL * (unsigned __int16)v8 + 2) = v17;
                    if ( v20 == ReportCount && ReportCount == 2 )
                      *(_DWORD *)(v18 + 276) |= 0x800u;
                  }
                }
                v17 = *(_WORD *)(v9 + 24LL * v17 + 8);
              }
              while ( v17 );
              v16 = v29;
              v14 = v24;
              v15 = v30;
              v13 = v31;
            }
          }
        }
        v21 = v8;
        LOWORD(v8) = *(_WORD *)(v9 + 8 * v16 + 8);
        if ( (_WORD)v8 )
          v13[4 * (unsigned __int16)v8 + 2] = v21;
        else
          *(_WORD *)(v7 + 6) = v21;
        v24 = ++v14;
      }
      while ( v14 < *(_WORD *)(v9 + 8 * v15 + 6) );
      v6 = v26;
    }
    if ( !v6 )
      return 1;
  }
  return v11;
}
