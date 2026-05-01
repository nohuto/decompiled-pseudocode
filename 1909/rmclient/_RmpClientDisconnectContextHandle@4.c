/*
 * XREFs of _RmpClientDisconnectContextHandle@4 @ 0x100118B9
 * Callers:
 *     _RmpClientConnectionCleanup@4 @ 0x10011807 (_RmpClientConnectionCleanup@4.c)
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

void __thiscall RmpClientDisconnectContextHandle(void *this)
{
  void *ContextHandle; // [esp+10h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+14h] [ebp-18h]

  ContextHandle = this;
  ms_exc.registration.TryLevel = 0;
  _NdrClientCall4(&stru_10001928, &byte_10003EA8, &ContextHandle);
  ms_exc.registration.TryLevel = -2;
  if ( ContextHandle )
    RpcSsDestroyClientContext(&ContextHandle);
}
