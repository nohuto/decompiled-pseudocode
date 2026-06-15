/*
 * XREFs of ??0CComAutoCriticalSection@ATL@@QEAA@XZ @ 0x180050F10
 * Callers:
 *     ??0AudioDeviceMgr@@IEAA@XZ @ 0x1800509C8 (--0AudioDeviceMgr@@IEAA@XZ.c)
 *     ??0EndpointCollection@@IEAA@XZ @ 0x180050C24 (--0EndpointCollection@@IEAA@XZ.c)
 *     ??0CConstraintModelResourceManager@@AEAA@XZ @ 0x180050D54 (--0CConstraintModelResourceManager@@AEAA@XZ.c)
 *     ??0PhoneTopology@@IEAA@XZ @ 0x180050E40 (--0PhoneTopology@@IEAA@XZ.c)
 *     ??0PhoneCallAudio@@IEAA@XZ @ 0x180058EBC (--0PhoneCallAudio@@IEAA@XZ.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x18002D888 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AE7FC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
struct _RTL_CRITICAL_SECTION *__fastcall ATL::CComAutoCriticalSection::CComAutoCriticalSection(
        struct _RTL_CRITICAL_SECTION *this)
{
  int v2; // eax

  memset_0(this, 0, sizeof(struct _RTL_CRITICAL_SECTION));
  v2 = ATL::CComCriticalSection::Init(this);
  if ( v2 < 0 )
    ATL::AtlThrowImpl(v2);
  return this;
}
