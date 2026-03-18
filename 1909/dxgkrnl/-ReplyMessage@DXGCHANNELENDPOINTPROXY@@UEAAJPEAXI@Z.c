/*
 * XREFs of ?ReplyMessage@DXGCHANNELENDPOINTPROXY@@UEAAJPEAXI@Z @ 0x1C028F5B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGCHANNELENDPOINTPROXY::ReplyMessage(DXGCHANNELENDPOINTPROXY *this, void *a2)
{
  __int64 result; // rax
  __int64 v4; // rcx

  result = 3221225473LL;
  v4 = *((_QWORD *)this + 17);
  if ( v4 )
  {
    ((void (__fastcall *)(__int64, void *))qword_1C00A3C78)(v4, a2);
    *((_QWORD *)this + 17) = 0LL;
    return 0LL;
  }
  return result;
}
