/*
 * XREFs of TtmpDispatchSetDisplayTimeouts @ 0x1408821A0
 * Callers:
 *     TtmDispatchApi @ 0x140881720 (TtmDispatchApi.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     TtmiLogError @ 0x1407616FC (TtmiLogError.c)
 *     TtmiTerminalSetDisplayTimeouts @ 0x14087EEE8 (TtmiTerminalSetDisplayTimeouts.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1408819A8 (TtmpAcquireSessionFromTerminalHandle.c)
 */

__int64 __fastcall TtmpDispatchSetDisplayTimeouts(__int64 a1)
{
  int v2; // eax
  PVOID v3; // rbx
  unsigned int v4; // edi
  _DWORD *v5; // rsi
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  v2 = TtmpAcquireSessionFromTerminalHandle(*(void **)(a1 + 8), 1, 1, &v8, (__int64 *)&Object);
  v3 = Object;
  v4 = v2;
  v5 = (_DWORD *)v8;
  if ( v2 >= 0 )
  {
    if ( !*((_DWORD *)Object + 7) )
      *(_BYTE *)(v8 + 240) = 0;
    TtmiTerminalSetDisplayTimeouts(v5, (__int64)v3, *(_DWORD *)(a1 + 16), *(_DWORD *)(a1 + 20));
    v4 = 0;
  }
  else
  {
    TtmiLogError("TtmpDispatchSetDisplayTimeouts", 543, v2, v2);
  }
  if ( v5 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( v3 )
    ObfDereferenceObject(v3);
  return v4;
}
