/*
 * XREFs of ?OnStreamGroupConnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x180042720
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSaDeviceProxy::OnStreamGroupConnected(CSaDeviceProxy *this, struct IStreamGroupProxy *a2)
{
  int v4; // ebp
  int v5; // edi
  int v6; // ebx

  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 224LL))(a2)
    || (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 216LL))(a2)
    || (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 232LL))(a2) )
  {
    v5 = (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 232LL))(a2) != 0;
    v6 = (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 216LL))(a2) != 0;
    LOBYTE(v4) = (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 224LL))(a2) != 0;
    *((_DWORD *)this + 21) += v6;
    *((_DWORD *)this + 22) += v4;
    *((_DWORD *)this + 23) += v5;
    *((_QWORD *)this + 12) = GetTickCount64();
  }
  ++*((_DWORD *)this + 20);
}
