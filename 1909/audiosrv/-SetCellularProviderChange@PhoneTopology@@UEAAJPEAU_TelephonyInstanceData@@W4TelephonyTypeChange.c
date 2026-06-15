/*
 * XREFs of ?SetCellularProviderChange@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyTypeChangeOp@@@Z @ 0x180148EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180057130 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?AddWorkItemToQueue@PhoneTopology@@AEAAJPEAVPhoneTopologyWorkItem@@@Z @ 0x180147184 (-AddWorkItemToQueue@PhoneTopology@@AEAAJPEAVPhoneTopologyWorkItem@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneTopology::SetCellularProviderChange(PhoneTopology *a1, _QWORD *a2, int a3)
{
  int v6; // ecx
  char *v7; // rax
  struct PhoneTopologyWorkItem *v8; // rbx
  int v9; // eax
  int v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h]

  v12 = 0LL;
  v6 = (*(__int64 (__fastcall **)(PhoneTopology *, _QWORD *, int *))(*(_QWORD *)a1 + 96LL))(a1, a2, &v11);
  if ( v6 >= 0 )
  {
    if ( v11 )
    {
      v7 = (char *)operator new(0x438uLL);
      v8 = (struct PhoneTopologyWorkItem *)v7;
      if ( v7 )
      {
        *(_QWORD *)v7 = &PhoneTopologyWorkItem::`vftable';
        *((_QWORD *)v7 + 1) = *a2;
        *((_DWORD *)v7 + 4) = 1;
        *((_DWORD *)v7 + 5) = a3;
        *((_DWORD *)v7 + 268) = 1;
        memset_0(v7 + 24, 0, 0x418uLL);
        *(_QWORD *)v8 = &CallProviderChangeWorkItem::`vftable';
      }
      else
      {
        v8 = 0LL;
      }
      if ( v8 )
      {
        v9 = PhoneTopology::AddWorkItemToQueue(a1, v8);
        v6 = 0;
        if ( v9 < 0 )
          return (unsigned int)v9;
      }
      else
      {
        return (unsigned int)-2147024882;
      }
    }
    else
    {
      return (unsigned int)-2147024809;
    }
  }
  return (unsigned int)v6;
}
