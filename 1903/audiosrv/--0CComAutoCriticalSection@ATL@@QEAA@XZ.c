/*
 * XREFs of ??0CComAutoCriticalSection@ATL@@QEAA@XZ @ 0x1800549C0
 * Callers:
 *     ??0PhoneCallAudio@@IEAA@XZ @ 0x180053BC8 (--0PhoneCallAudio@@IEAA@XZ.c)
 *     ??0AudioDeviceMgr@@IEAA@XZ @ 0x180054480 (--0AudioDeviceMgr@@IEAA@XZ.c)
 *     ??0EndpointCollection@@IEAA@XZ @ 0x1800546D4 (--0EndpointCollection@@IEAA@XZ.c)
 *     ??0CConstraintModelResourceManager@@AEAA@XZ @ 0x180054804 (--0CConstraintModelResourceManager@@AEAA@XZ.c)
 *     ??0PhoneTopology@@IEAA@XZ @ 0x1800548F0 (--0PhoneTopology@@IEAA@XZ.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180026DD0 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x180064BFE (memset_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BD31C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
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
