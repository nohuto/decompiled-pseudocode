/*
 * XREFs of NtQueryCompositionInputSink @ 0x1C0036E70
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C00339B0 (UserIsCurrentProcessDwm.c)
 *     ?QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z @ 0x1C00347EC (-QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C006E920 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtQueryCompositionInputSink(void *a1, ULONG64 a2)
{
  int InputQueueTypes; // ebx
  int *v5; // rax
  int v6; // esi
  ULONG64 v7; // rax
  ULONG64 v8; // rax
  __int128 v10; // [rsp+28h] [rbp-30h] BYREF
  __int64 v11; // [rsp+38h] [rbp-20h]
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  LODWORD(Object) = 0;
  InputQueueTypes = 0;
  if ( !UserIsCurrentProcessDwm((__int64)a1) )
    InputQueueTypes = -1073741790;
  if ( InputQueueTypes >= 0 )
  {
    v5 = (int *)a2;
    if ( a2 >= MmUserProbeAddress )
      v5 = (int *)MmUserProbeAddress;
    v6 = *v5;
    LODWORD(Object) = v6;
    if ( v6 == 20 )
    {
      v8 = a2;
      if ( a2 >= MmUserProbeAddress )
        v8 = MmUserProbeAddress;
      v10 = *(_OWORD *)v8;
      v11 = *(unsigned int *)(v8 + 16);
    }
    else if ( v6 == 24 )
    {
      v7 = a2;
      if ( a2 >= MmUserProbeAddress )
        v7 = MmUserProbeAddress;
      v10 = *(_OWORD *)v7;
      v11 = *(_QWORD *)(v7 + 16);
    }
    else
    {
      InputQueueTypes = -1073741811;
    }
    if ( InputQueueTypes >= 0 )
    {
      InputQueueTypes = CompositionInputObject::ResolveHandle(a1, 1u, 1, (struct CompositionInputObject **)&Object);
      if ( InputQueueTypes >= 0 )
      {
        InputQueueTypes = CompositionInputObject::QueryInputQueueTypes(
                            (CompositionInputObject *)Object,
                            (struct COMPOSITION_INPUT_SINK_QUERY_V2 *)&v10);
        ObfDereferenceObject(Object);
      }
      if ( InputQueueTypes >= 0 )
      {
        if ( v6 == 20 )
        {
          if ( a2 >= MmUserProbeAddress )
            a2 = MmUserProbeAddress;
          *(_OWORD *)a2 = v10;
          *(_DWORD *)(a2 + 16) = v11;
        }
        else if ( v6 == 24 )
        {
          if ( a2 >= MmUserProbeAddress )
            a2 = MmUserProbeAddress;
          *(_OWORD *)a2 = v10;
          *(_QWORD *)(a2 + 16) = v11;
        }
      }
    }
  }
  return (unsigned int)InputQueueTypes;
}
