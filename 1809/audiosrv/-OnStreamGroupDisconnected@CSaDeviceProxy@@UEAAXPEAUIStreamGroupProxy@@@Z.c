/*
 * XREFs of ?OnStreamGroupDisconnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x180045B60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSaDeviceProxy::OnStreamGroupDisconnected(CSaDeviceProxy *this, struct IStreamGroupProxy *a2)
{
  int v4; // edi
  int v5; // ebx
  char v6; // al

  if ( (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 224LL))(a2)
    || (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 216LL))(a2)
    || (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 232LL))(a2) )
  {
    v4 = -((*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 232LL))(a2) != 0);
    v5 = -((*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 216LL))(a2) != 0);
    v6 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 224LL))(a2);
    *((_DWORD *)this + 21) += v5;
    *((_DWORD *)this + 22) -= v6 != 0;
    *((_DWORD *)this + 23) += v4;
    *((_QWORD *)this + 12) = GetTickCount64();
  }
  --*((_DWORD *)this + 20);
}
