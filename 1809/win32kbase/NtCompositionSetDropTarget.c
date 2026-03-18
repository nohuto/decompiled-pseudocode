/*
 * XREFs of NtCompositionSetDropTarget @ 0x1C0072A10
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C006E920 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C0072B38 (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 */

__int64 __fastcall NtCompositionSetDropTarget(void *a1, ULONG64 a2, ULONG64 a3)
{
  _QWORD *v3; // rdi
  int v4; // ebx
  __int128 v5; // xmm3
  __int128 v6; // xmm4
  __int64 v7; // xmm0_8
  PVOID v8; // rsi
  _OWORD v10[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v11; // [rsp+50h] [rbp-28h]
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF
  ULONG64 v13; // [rsp+90h] [rbp+18h]
  __int64 v14; // [rsp+98h] [rbp+20h]

  v13 = a3;
  v3 = (_QWORD *)a3;
  v4 = 0;
  Object = 0LL;
  if ( a2 )
  {
    a3 = a2 + 56;
    if ( a2 + 56 < a2 || a3 > MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v5 = *(_OWORD *)(a2 + 16);
    v6 = *(_OWORD *)(a2 + 32);
    v7 = *(_QWORD *)(a2 + 48);
    v10[0] = *(_OWORD *)a2;
    v10[1] = v5;
    v10[2] = v6;
    v11 = v7;
  }
  else
  {
    v4 = -1073741811;
  }
  if ( v4 >= 0 )
  {
    LOBYTE(a3) = 1;
    v4 = CompositionInputObject::ResolveHandle(a1, 2LL, a3, (struct CompositionInputObject **)&Object);
    v8 = Object;
    if ( v4 >= 0 )
    {
      v14 = *((_QWORD *)Object + 2);
      v4 = CompositionInputObject::SetDropTarget(Object, (const struct COMPOSITION_INPUT_QUEUE *)v10);
      ObfDereferenceObject(v8);
      if ( v4 >= 0 )
      {
        if ( v3 )
        {
          if ( v3 + 1 < v3 || (unsigned __int64)(v3 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          *v3 = v14;
        }
      }
    }
  }
  return (unsigned int)v4;
}
