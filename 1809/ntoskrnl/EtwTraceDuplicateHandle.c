/*
 * XREFs of EtwTraceDuplicateHandle @ 0x1408B8500
 * Callers:
 *     ObDuplicateObject @ 0x1405D1B70 (ObDuplicateObject.c)
 *     ObCompleteObjectDuplication @ 0x140613FA0 (ObCompleteObjectDuplication.c)
 *     ObInheritObjectHandle @ 0x140697B64 (ObInheritObjectHandle.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExCheckSingleFilter @ 0x1401B7570 (ExCheckSingleFilter.c)
 *     EtwpTraceKernelEventWithFilter @ 0x140311E48 (EtwpTraceKernelEventWithFilter.c)
 */

void __fastcall EtwTraceDuplicateHandle(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6)
{
  unsigned int v7; // edi
  unsigned int v8; // esi
  bool v9; // zf
  __int64 v10; // r14
  int v11; // r12d
  __int64 v12; // r8
  int v13; // ebx
  _WORD *v14; // rbp
  __int64 v15; // [rsp+30h] [rbp-78h] BYREF
  int v16; // [rsp+38h] [rbp-70h]
  int v17; // [rsp+3Ch] [rbp-6Ch]
  int v18; // [rsp+40h] [rbp-68h]
  __int16 v19; // [rsp+44h] [rbp-64h]
  int v20; // [rsp+46h] [rbp-62h]
  __int64 v21; // [rsp+50h] [rbp-58h]
  __int64 v22; // [rsp+58h] [rbp-50h]
  __int64 v23; // [rsp+60h] [rbp-48h]
  _QWORD v24[2]; // [rsp+68h] [rbp-40h] BYREF

  v21 = a3;
  v7 = 0;
  v23 = a2;
  v8 = *(_DWORD *)(EtwpHostSiloState + 4224);
  v9 = !_BitScanForward((unsigned int *)&v10, v8);
  v11 = *(_DWORD *)(a6 + 192);
  v22 = a1;
  if ( !v9 )
  {
    do
    {
      v8 &= v8 - 1;
      v12 = 32LL * (unsigned int)v10 + EtwpHostSiloState + 4260;
      if ( v12 )
      {
        if ( (*(_DWORD *)(v12 + 16) & 0x40) != 0 )
        {
          v13 = 0;
          v14 = (_WORD *)((char *)&EtwpObjectTypeFilter + 20 * v10);
          if ( *v14 )
          {
            while ( !(unsigned int)ExCheckSingleFilter(v11, *(_DWORD *)&v14[2 * v13 + 2]) )
            {
              if ( ++v13 >= (unsigned int)(unsigned __int16)*v14 )
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
      v15 = v21;
      v16 = v22;
      v17 = v23;
      v18 = a5;
      v19 = *(unsigned __int8 *)(a6 + 40);
      v24[0] = &v15;
      v20 = a4;
      v24[1] = 26LL;
      EtwpTraceKernelEventWithFilter((__int64)v24, 1u, v7, 0x1122u, 0x10501903u);
    }
  }
}
