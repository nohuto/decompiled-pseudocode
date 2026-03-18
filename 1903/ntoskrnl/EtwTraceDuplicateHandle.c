/*
 * XREFs of EtwTraceDuplicateHandle @ 0x1408F3BE4
 * Callers:
 *     ObDuplicateObject @ 0x1405E61D0 (ObDuplicateObject.c)
 *     ObCompleteObjectDuplication @ 0x14063FF80 (ObCompleteObjectDuplication.c)
 *     ObInheritObjectHandle @ 0x1406BBFE0 (ObInheritObjectHandle.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     EtwpTraceKernelEventWithFilter @ 0x14032FD8C (EtwpTraceKernelEventWithFilter.c)
 *     ExCheckSingleFilter @ 0x1403391EC (ExCheckSingleFilter.c)
 */

void __fastcall EtwTraceDuplicateHandle(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6)
{
  int v6; // r12d
  unsigned int v7; // edi
  unsigned int v8; // esi
  bool v9; // zf
  __int64 v10; // r15
  __int64 v11; // r8
  int v12; // ebx
  _WORD *v13; // r14
  __int64 v15; // [rsp+40h] [rbp-31h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-29h]
  _TBYTE v17; // [rsp+50h] [rbp-21h]
  __int64 v18; // [rsp+60h] [rbp-11h]
  __int64 v19; // [rsp+68h] [rbp-9h]
  __int64 v20; // [rsp+70h] [rbp-1h]
  _QWORD v21[2]; // [rsp+78h] [rbp+7h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  *(_QWORD *)&v17 = 0LL;
  v6 = *(_DWORD *)(a6 + 192);
  HIWORD(v17) = 0;
  v18 = a3;
  v7 = 0;
  v20 = a2;
  v8 = *(_DWORD *)(EtwpHostSiloState + 4224);
  v9 = !_BitScanForward((unsigned int *)&v10, v8);
  v19 = a1;
  if ( !v9 )
  {
    do
    {
      v8 &= v8 - 1;
      v11 = 32LL * (unsigned int)v10 + EtwpHostSiloState + 4260;
      if ( v11 )
      {
        if ( (*(_DWORD *)(v11 + 16) & 0x40) != 0 )
        {
          v12 = 0;
          v13 = (_WORD *)((char *)&EtwpObjectTypeFilter + 20 * v10);
          if ( *v13 )
          {
            while ( !(unsigned int)ExCheckSingleFilter(v6, *(_DWORD *)&v13[2 * v12 + 2]) )
            {
              if ( ++v12 >= (unsigned int)(unsigned __int16)*v13 )
                goto LABEL_9;
            }
            v7 |= 1 << v10;
          }
        }
      }
LABEL_9:
      v9 = !_BitScanForward((unsigned int *)&v10, v8);
    }
    while ( !v9 );
    if ( v7 )
    {
      v15 = v18;
      v16 = __PAIR64__(v20, v19);
      *(_DWORD *)((char *)&v17 + 6) = a4;
      LODWORD(v17) = a5;
      WORD2(v17) = *(unsigned __int8 *)(a6 + 40);
      v21[0] = &v15;
      v21[1] = 26LL;
      EtwpTraceKernelEventWithFilter((__int64)v21, 1u, v7, 0x1122u, 0x10501903u);
    }
  }
}
