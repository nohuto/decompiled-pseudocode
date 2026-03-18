/*
 * XREFs of ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C008D840
 * Callers:
 *     <none>
 * Callees:
 *     HMRemoveHandleForObject @ 0x1C00657F0 (HMRemoveHandleForObject.c)
 *     HMMarkObjectDestroy @ 0x1C00659B0 (HMMarkObjectDestroy.c)
 *     HMCreateHandleForObject @ 0x1C008D8D0 (HMCreateHandleForObject.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Created(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  struct RawInputManagerDeviceObject *v3; // rdi
  char *v4; // rcx
  struct DEVICEINFO *v5; // rax
  struct DEVICEINFO *v6; // rbx

  v3 = a2;
  v4 = (char *)a2 + 88;
  LOBYTE(a2) = 19;
  v5 = (struct DEVICEINFO *)HMCreateHandleForObject(v4, a2);
  v6 = v5;
  if ( v5 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CBaseInput *, struct RawInputManagerDeviceObject *, _QWORD))(*(_QWORD *)this + 80LL))(
           this,
           v3,
           *(_QWORD *)v5) )
    {
      *((_QWORD *)v6 + 7) = CBaseInput::_spDevList;
      CBaseInput::_spDevList = v6;
      ObReferenceObjectByPointer(v3, 3u, ExRawInputManagerObjectType, 0);
    }
    else
    {
      HMMarkObjectDestroy(v6);
      HMRemoveHandleForObject((int *)v6);
    }
  }
  return 0LL;
}
