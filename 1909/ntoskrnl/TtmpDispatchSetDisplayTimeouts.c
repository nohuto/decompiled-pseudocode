/*
 * XREFs of TtmpDispatchSetDisplayTimeouts @ 0x1408BF7B8
 * Callers:
 *     TtmDispatchApi @ 0x1408BED60 (TtmDispatchApi.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     TtmiTerminalSetDisplayTimeouts @ 0x1408BC314 (TtmiTerminalSetDisplayTimeouts.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1408BEFE8 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiLogError @ 0x1408C157C (TtmiLogError.c)
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
    TtmiLogError("TtmpDispatchSetDisplayTimeouts");
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
