/*
 * XREFs of PnpReleaseResourcesInternal @ 0x14072EFB0
 * Callers:
 *     IopReleaseResources @ 0x14072E318 (IopReleaseResources.c)
 *     PnpReallocateResources @ 0x14083C5B4 (PnpReallocateResources.c)
 * Callees:
 *     IopWriteAllocatedResourcesToRegistry @ 0x14072F28C (IopWriteAllocatedResourcesToRegistry.c)
 *     IopFindLegacyBusDeviceNode @ 0x140730AC0 (IopFindLegacyBusDeviceNode.c)
 *     IopCallArbiter @ 0x140730B20 (IopCallArbiter.c)
 */

__int64 __fastcall PnpReleaseResourcesInternal(_QWORD *a1)
{
  unsigned int *v2; // rdi
  unsigned int v3; // r12d
  unsigned int *v4; // r14
  unsigned int v5; // r8d
  unsigned int v6; // r13d
  unsigned int v7; // eax
  __int64 v8; // rbx
  int v9; // ecx
  _QWORD *v10; // rax
  _QWORD *i; // r15
  _QWORD *v12; // rcx
  _QWORD **v13; // rax
  __int64 LegacyBusDeviceNode; // rax
  __int64 v16; // r11
  unsigned int v17; // eax
  unsigned int *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  _QWORD *v21; // [rsp+30h] [rbp-39h] BYREF
  _QWORD **v22; // [rsp+38h] [rbp-31h]
  int v23; // [rsp+40h] [rbp-29h]
  __int64 v24; // [rsp+48h] [rbp-21h]
  __int64 v25; // [rsp+50h] [rbp-19h]
  int v26; // [rsp+58h] [rbp-11h]
  int v27; // [rsp+5Ch] [rbp-Dh]
  __int64 v28; // [rsp+60h] [rbp-9h]
  __int64 v29; // [rsp+78h] [rbp+Fh]
  int v30; // [rsp+D0h] [rbp+67h]
  unsigned int v31; // [rsp+D8h] [rbp+6Fh]
  unsigned int v32; // [rsp+E0h] [rbp+77h]

  v23 = 0;
  v24 = 0LL;
  v27 = 0;
  v28 = 0LL;
  v29 = 0LL;
  v2 = (unsigned int *)a1[52];
  v22 = &v21;
  v21 = &v21;
  v25 = a1[4];
  v26 = 4;
  if ( (v2 || (v2 = (unsigned int *)a1[68]) != 0LL) && (v3 = *v2) != 0 )
  {
    v4 = v2 + 1;
  }
  else
  {
    v2 = 0LL;
    v4 = 0LL;
    v3 = 1;
  }
  v5 = 0;
  v32 = 0;
  if ( v3 )
  {
    while ( v2 )
    {
      v6 = *v4;
      v7 = v4[1];
      v31 = v7;
      if ( *v4 == -1 )
        goto LABEL_28;
LABEL_7:
      if ( a1 == (_QWORD *)IopRootDeviceNode )
        v8 = (__int64)a1;
      else
        v8 = a1[2];
      v9 = 1;
      v30 = 1;
      if ( v8 )
      {
        do
        {
          if ( v8 == IopRootDeviceNode && v9 )
          {
            LegacyBusDeviceNode = IopFindLegacyBusDeviceNode(v6, v7);
            v8 = LegacyBusDeviceNode;
            if ( LegacyBusDeviceNode == v16 && !v6 )
              v8 = IopFindLegacyBusDeviceNode(1LL, 0LL);
            v30 = 0;
          }
          v10 = (_QWORD *)(v8 + 488);
          for ( i = *(_QWORD **)(v8 + 488); i != v10; i = (_QWORD *)*i )
          {
            if ( i[3] )
            {
              v30 = 0;
              v21 = i + 5;
              v22 = (_QWORD **)(i + 5);
              i[5] = &v21;
              i[6] = &v21;
              IopCallArbiter(i, 0LL);
              IopCallArbiter(i, 2LL);
              v12 = v21;
              v13 = v22;
              if ( (_QWORD **)v21[1] != &v21 || *v22 != &v21 )
                __fastfail(3u);
              *v22 = v21;
              v12[1] = v13;
              v22 = &v21;
              v21 = &v21;
              v10 = (_QWORD *)(v8 + 488);
            }
          }
          v8 = *(_QWORD *)(v8 + 16);
          v9 = v30;
          v7 = v31;
        }
        while ( v8 );
        v5 = v32;
      }
      if ( v3 > 1 )
      {
        v17 = v4[3];
        v18 = v4 + 4;
        if ( v17 )
        {
          v19 = v17;
          do
          {
            v20 = 0LL;
            if ( *(_BYTE *)v18 == 5 )
              v20 = v18[1];
            v18 = (unsigned int *)((char *)v18 + v20 + 20);
            --v19;
          }
          while ( v19 );
        }
        v4 = v18;
      }
      v32 = ++v5;
      if ( v5 >= v3 )
        return IopWriteAllocatedResourcesToRegistry(a1, 0LL, 0LL);
    }
    v7 = 0;
    v31 = 0;
LABEL_28:
    v6 = 1;
    goto LABEL_7;
  }
  return IopWriteAllocatedResourcesToRegistry(a1, 0LL, 0LL);
}
