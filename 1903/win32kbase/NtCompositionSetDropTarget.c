/*
 * XREFs of NtCompositionSetDropTarget @ 0x1C007CCC0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C007CE3C (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00806F0 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

__int64 __fastcall NtCompositionSetDropTarget(void *a1, ULONG64 a2, _QWORD *a3)
{
  int v6; // edi
  PVOID v7; // r14
  __int64 v8; // rbx
  _BYTE v10[56]; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v11; // [rsp+58h] [rbp-70h]
  __int128 v12; // [rsp+68h] [rbp-60h]
  __int128 v13; // [rsp+78h] [rbp-50h]
  __int64 v14; // [rsp+88h] [rbp-40h]
  PVOID Object; // [rsp+D8h] [rbp+10h] BYREF
  _QWORD *v16; // [rsp+E0h] [rbp+18h]
  __int64 v17; // [rsp+E8h] [rbp+20h]

  v16 = a3;
  v6 = 0;
  memset(v10, 0, sizeof(v10));
  v17 = 0LL;
  Object = 0LL;
  if ( a2 )
  {
    if ( a2 + 56 < a2 || a2 + 56 > MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v11 = *(_OWORD *)a2;
    v12 = *(_OWORD *)(a2 + 16);
    v13 = *(_OWORD *)(a2 + 32);
    v14 = *(_QWORD *)(a2 + 48);
    *(_OWORD *)v10 = v11;
    *(_OWORD *)&v10[16] = v12;
    *(_OWORD *)&v10[32] = v13;
    *(_QWORD *)&v10[48] = v14;
  }
  else
  {
    v6 = -1073741811;
  }
  if ( v6 >= 0 )
  {
    v6 = CompositionInputObject::ResolveHandle(a1, 2u, 1, (struct CompositionInputObject **)&Object);
    v7 = Object;
    if ( v6 >= 0 )
    {
      v8 = *((_QWORD *)Object + 2);
      v17 = v8;
      v6 = CompositionInputObject::SetDropTarget(Object, (const struct COMPOSITION_INPUT_QUEUE *)v10);
      ObfDereferenceObject(v7);
      if ( v6 >= 0 )
      {
        if ( a3 )
        {
          if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          *a3 = v8;
        }
      }
    }
  }
  return (unsigned int)v6;
}
