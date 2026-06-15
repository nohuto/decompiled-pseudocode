/*
 * XREFs of ?OnPropertyValueChanged@CAudioSrv@@UEAAJPEBGU_tagpropertykey@@@Z @ 0x18001EFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGU_tagpropertykey@@@Z @ 0x18001F010 (-QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGU_tagpropertykey@@@Z.c)
 */

__int64 __fastcall CAudioSrv::OnPropertyValueChanged(
        CAudioSrv *this,
        const unsigned __int16 *a2,
        struct _tagpropertykey *a3)
{
  GUID fmtid; // xmm0
  struct _tagpropertykey v5; // [rsp+20h] [rbp-28h] BYREF

  fmtid = a3->fmtid;
  v5.pid = a3->pid;
  v5.fmtid = fmtid;
  return CAudioSrv::QueueOnDeviceWorkItem((CAudioSrv *)((char *)this - 72), a2, &v5);
}
