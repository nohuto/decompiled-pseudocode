/*
 * XREFs of EtwTraceObject @ 0x1408F46FC
 * Callers:
 *     ObpDeregisterObject @ 0x14089F618 (ObpDeregisterObject.c)
 *     ObpRegisterObject @ 0x1408A006C (ObpRegisterObject.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     EtwpTraceKernelEventWithFilter @ 0x14032FD8C (EtwpTraceKernelEventWithFilter.c)
 *     ExCheckSingleFilter @ 0x1403391EC (ExCheckSingleFilter.c)
 */

void __fastcall EtwTraceObject(unsigned __int16 a1, __int64 a2)
{
  unsigned __int8 v4; // r15
  unsigned int v5; // edi
  int v6; // r9d
  unsigned int v7; // esi
  bool v8; // zf
  __int64 v9; // r14
  __int64 v10; // r8
  int v11; // ebx
  _WORD *v12; // rbp
  int v13; // eax
  int v14; // [rsp+30h] [rbp-68h]
  __int64 v15; // [rsp+38h] [rbp-60h] BYREF
  __int64 v16; // [rsp+40h] [rbp-58h]
  _QWORD v17[2]; // [rsp+48h] [rbp-50h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  v4 = ObHeaderCookie ^ *(_BYTE *)(a2 + 24) ^ BYTE1(a2);
  v5 = 0;
  v6 = *(_DWORD *)(ObTypeIndexTable[v4] + 192);
  v14 = v6;
  v7 = *(_DWORD *)(EtwpHostSiloState + 4224);
  v8 = !_BitScanForward((unsigned int *)&v9, v7);
  if ( !v8 )
  {
    do
    {
      v7 &= v7 - 1;
      v10 = 32LL * (unsigned int)v9 + EtwpHostSiloState + 4260;
      if ( v10 )
      {
        if ( (*(_DWORD *)(v10 + 16) & 0x80u) != 0 )
        {
          v11 = 0;
          v12 = (_WORD *)(0x140000000LL + 20 * v9 + 4401024);
          if ( *v12 )
          {
            while ( 1 )
            {
              v13 = ExCheckSingleFilter(v6, *(_DWORD *)&v12[2 * v11 + 2]);
              v6 = v14;
              if ( v13 )
                break;
              if ( ++v11 >= (unsigned int)(unsigned __int16)*v12 )
                goto LABEL_9;
            }
            v5 |= 1 << v9;
          }
        }
      }
LABEL_9:
      v8 = !_BitScanForward((unsigned int *)&v9, v7);
    }
    while ( !v8 );
    if ( v5 )
    {
      v17[1] = 16LL;
      v15 = a2 + 48;
      LOWORD(v16) = v4;
      v17[0] = &v15;
      EtwpTraceKernelEventWithFilter((__int64)v17, 1u, v5, a1, 0x10501902u);
    }
  }
}
