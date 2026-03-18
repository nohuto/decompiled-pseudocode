/*
 * XREFs of ??1CIVSerializer@@QEAA@XZ @ 0x1C0153A10
 * Callers:
 *     ?ivCallback@CHidInput@@MEAAJPEAX@Z @ 0x1C014D340 (-ivCallback@CHidInput@@MEAAJPEAX@Z.c)
 *     ?ivRootDeliverRawInput@CHidInput@@MEAAJPEAX@Z @ 0x1C014D9C0 (-ivRootDeliverRawInput@CHidInput@@MEAAJPEAX@Z.c)
 *     ?ivRootDeliverTouchInput@CHidInput@@MEAAJPEAX@Z @ 0x1C014DC80 (-ivRootDeliverTouchInput@CHidInput@@MEAAJPEAX@Z.c)
 *     ?ivRootPnp@CBaseInput@@IEAAJPEAUDEVICEINFO@@K@Z @ 0x1C01564F0 (-ivRootPnp@CBaseInput@@IEAAJPEAUDEVICEINFO@@K@Z.c)
 *     ?ivRootPnpCreated@CBaseInput@@IEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C01567CC (-ivRootPnpCreated@CBaseInput@@IEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 */

void __fastcall CIVSerializer::~CIVSerializer(CIVSerializer *this)
{
  __int64 v1; // rcx

  if ( !*((_BYTE *)this + 32) )
  {
    v1 = *(_QWORD *)this;
    if ( v1 )
      Win32FreePool(v1);
  }
}
