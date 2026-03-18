/*
 * XREFs of ?SetHandleProcess@DXGVAILOBJECT@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C025AE10
 * Callers:
 *     ?SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1C022A970 (-SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

void __fastcall DXGVAILOBJECT::SetHandleProcess(DXGVAILOBJECT *this, struct _EPROCESS *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  void *v6; // rcx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (DXGVAILOBJECT *)((char *)this + 40), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  if ( a2 || PsGetCurrentProcess(v5, v4) == *((_QWORD *)this + 11) )
  {
    v6 = (void *)*((_QWORD *)this + 11);
    if ( v6 )
    {
      ObfDereferenceObject(v6);
      *((_QWORD *)this + 11) = 0LL;
    }
    if ( a2 )
    {
      *((_QWORD *)this + 11) = a2;
      ObfReferenceObject(a2);
    }
  }
  if ( v7[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
}
