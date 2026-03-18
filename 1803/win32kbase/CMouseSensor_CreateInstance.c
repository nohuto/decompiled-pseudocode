/*
 * XREFs of CMouseSensor_CreateInstance @ 0x1C0131B00
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     ??0CBaseInput@@IEAA@K@Z @ 0x1C012184C (--0CBaseInput@@IEAA@K@Z.c)
 */

struct _LIST_ENTRY *CMouseSensor_CreateInstance()
{
  CBaseInput *v0; // rax
  struct _LIST_ENTRY *v1; // rbx

  WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink = 0LL;
  v0 = (CBaseInput *)Win32AllocPool(1096LL, 0x70694843u);
  v1 = (struct _LIST_ENTRY *)v0;
  if ( v0 )
  {
    CBaseInput::CBaseInput(v0, 1u);
    v1[68].Flink = 0LL;
    v1->Flink = (struct _LIST_ENTRY *)&CMouseSensor::`vftable';
  }
  else
  {
    v1 = 0LL;
  }
  if ( v1 )
    WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink = v1;
  return v1;
}
