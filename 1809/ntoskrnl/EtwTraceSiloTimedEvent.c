/*
 * XREFs of EtwTraceSiloTimedEvent @ 0x1403107A8
 * Callers:
 *     PfHardFaultLog @ 0x140019F24 (PfHardFaultLog.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400C7110 (EtwpLogKernelEvent.c)
 *     EtwTraceTimedEvent @ 0x14011BCDC (EtwTraceTimedEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall EtwTraceSiloTimedEvent(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // rdx
  _DWORD *v13; // rcx
  __int64 v14; // rax
  unsigned int v16; // ecx
  __int64 v17; // [rsp+30h] [rbp-48h] BYREF
  int v18; // [rsp+38h] [rbp-40h]
  int v19; // [rsp+3Ch] [rbp-3Ch]
  __int64 v20; // [rsp+40h] [rbp-38h]
  int v21; // [rsp+48h] [rbp-30h]
  int v22; // [rsp+4Ch] [rbp-2Ch]

  EtwTraceTimedEvent(a2, 0x2000u, a4, 32, 0x401802u, a7);
  if ( a1 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 1256) + 864LL);
    if ( v10 )
    {
      v22 = 0;
      v20 = a4;
      v21 = 32;
      v11 = *(_DWORD *)(v10 + 4224);
      while ( _BitScanForward(&v16, v11) )
      {
        v12 = v16;
        v11 &= v11 - 1;
        v13 = (_DWORD *)(32LL * v16 + v10 + 4260);
        if ( v13 )
        {
          if ( (*v13 & 0x2000) != 0 )
          {
            v14 = *(unsigned __int8 *)(v10 + 2 * v12 + 4209);
            v19 = 0;
            v18 = 8;
            v17 = a7 - 8 + 8 * v14;
            EtwpLogKernelEvent((__int64)&v17, v10, *(unsigned __int8 *)(v10 + 2 * v12 + 4208), 2u, a2, 0x401802u);
          }
        }
      }
    }
  }
}
