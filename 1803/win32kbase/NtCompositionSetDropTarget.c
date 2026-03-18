/*
 * XREFs of NtCompositionSetDropTarget @ 0x1C0001550
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C0002C10 (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C000FC20 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtCompositionSetDropTarget(void *a1, ULONG64 a2, _QWORD *a3)
{
  int v4; // ebx
  PVOID v5; // rsi
  _OWORD v7[3]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v8; // [rsp+50h] [rbp-58h]
  __int128 v9; // [rsp+58h] [rbp-50h]
  __int128 v10; // [rsp+68h] [rbp-40h]
  __int128 v11; // [rsp+78h] [rbp-30h]
  __int64 v12; // [rsp+88h] [rbp-20h]
  PVOID Object; // [rsp+B8h] [rbp+10h] BYREF
  _QWORD *v14; // [rsp+C0h] [rbp+18h]
  __int64 v15; // [rsp+C8h] [rbp+20h]

  v14 = a3;
  v4 = 0;
  Object = 0LL;
  if ( a2 )
  {
    if ( a2 + 56 < a2 || a2 + 56 > MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v9 = *(_OWORD *)a2;
    v10 = *(_OWORD *)(a2 + 16);
    v11 = *(_OWORD *)(a2 + 32);
    v12 = *(_QWORD *)(a2 + 48);
    v7[0] = v9;
    v7[1] = v10;
    v7[2] = v11;
    v8 = v12;
  }
  else
  {
    v4 = -1073741811;
  }
  if ( v4 >= 0 )
  {
    v4 = CompositionInputObject::ResolveHandle(a1, 2u, 1, (struct CompositionInputObject **)&Object);
    v5 = Object;
    if ( v4 >= 0 )
    {
      v15 = *((_QWORD *)Object + 2);
      v4 = CompositionInputObject::SetDropTarget(Object, (const struct COMPOSITION_INPUT_QUEUE *)v7);
      ObfDereferenceObject(v5);
      if ( v4 >= 0 )
      {
        if ( a3 )
        {
          if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          *a3 = v15;
        }
      }
    }
  }
  return (unsigned int)v4;
}
