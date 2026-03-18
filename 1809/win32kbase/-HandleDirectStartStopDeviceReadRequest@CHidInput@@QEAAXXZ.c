/*
 * XREFs of ?HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ @ 0x1C0051D00
 * Callers:
 *     rimObsStartStopDeviceRead @ 0x1C012D630 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x1C0050190 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 *     ?GetDispatcherObjectByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@@Z @ 0x1C0051D4C (-GetDispatcherObjectByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@@Z.c)
 *     ?ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ @ 0x1C0051D98 (-ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ.c)
 */

void __fastcall CHidInput::HandleDirectStartStopDeviceReadRequest(CHidInput *this)
{
  struct _KEVENT *DispatcherObjectByName; // rax

  if ( *((_QWORD *)this + 1) != -1LL )
  {
    if ( CBaseInput::ExecutingInSensorHostingProcess(this) )
    {
      CHidInput::OnDirectStartStopReadNotification(this);
    }
    else
    {
      DispatcherObjectByName = (struct _KEVENT *)CRIMBase::GetDispatcherObjectByName(this);
      KeSetEvent(DispatcherObjectByName, 1, 0);
    }
  }
}
