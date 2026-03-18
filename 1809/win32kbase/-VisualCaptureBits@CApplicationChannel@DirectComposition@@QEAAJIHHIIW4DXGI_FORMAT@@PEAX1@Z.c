/*
 * XREFs of ?VisualCaptureBits@CApplicationChannel@DirectComposition@@QEAAJIHHIIW4DXGI_FORMAT@@PEAX1@Z @ 0x1C0169374
 * Callers:
 *     NtVisualCaptureBits @ 0x1C0166E20 (NtVisualCaptureBits.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C000DCC0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     OpenDwmHandle @ 0x1C004870C (OpenDwmHandle.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C005B9E8 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C016849C (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 *     ?Create@CEvent@DirectComposition@@SAJPEAU_KEVENT@@HPEAPEAV12@@Z @ 0x1C01685C0 (-Create@CEvent@DirectComposition@@SAJPEAU_KEVENT@@HPEAPEAV12@@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::VisualCaptureBits(
        __int64 a1,
        unsigned __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        PVOID Object,
        PVOID a9)
{
  DirectComposition::CResourceMarshaler *v9; // rsi
  int v12; // r11d
  signed int v14; // ebx
  __int64 v15; // r9
  __int64 v16; // r9
  DirectComposition::CEvent *v17; // rcx
  DirectComposition::CEvent *v18; // rcx
  int v20; // [rsp+20h] [rbp-38h]
  int v21; // [rsp+20h] [rbp-38h]
  void *v22; // [rsp+30h] [rbp-28h] BYREF
  void *v23; // [rsp+38h] [rbp-20h] BYREF
  DirectComposition::CEvent *v24; // [rsp+60h] [rbp+8h] BYREF

  v24 = 0LL;
  v22 = (void *)-1LL;
  v9 = 0LL;
  v23 = (void *)-1LL;
  v12 = a2;
  v14 = *(_DWORD *)(a1 + 24) > 2 ? 0xC0000022 : 0;
  if ( *(int *)(a1 + 24) <= 2 )
  {
    a2 = (unsigned int)(a2 - 1);
    if ( v12 && a2 < *(_QWORD *)(a1 + 80) )
    {
      _mm_lfence();
      v9 = *(DirectComposition::CResourceMarshaler **)(a2 * *(_QWORD *)(a1 + 88) + *(_QWORD *)(a1 + 56));
    }
    if ( !v9
      || !(*(unsigned __int8 (__fastcall **)(DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v9 + 120LL))(
            v9,
            157LL) )
    {
      v14 = -1073741811;
    }
  }
  if ( v14 >= 0 )
  {
    v14 = DirectComposition::CEvent::Create(Object, a2, &v24);
    if ( v14 < 0
      || (v14 = OpenDwmHandle(Object, (POBJECT_TYPE)ExEventObjectType, 2u, v15, v20, &v22), v14 < 0)
      || (v14 = OpenDwmHandle(a9, MmSectionObjectType, 3u, v16, v21, &v23), v14 < 0) )
    {
      v18 = v24;
    }
    else
    {
      DirectComposition::CApplicationChannel::ReleaseResource(
        (DirectComposition::CApplicationChannel *)a1,
        *(struct DirectComposition::CResourceMarshaler **)(a1 + 744));
      v17 = *(DirectComposition::CEvent **)(a1 + 736);
      if ( v17 )
        DirectComposition::CEvent::`scalar deleting destructor'(v17);
      *(_QWORD *)(a1 + 736) = v24;
      *(_DWORD *)(a1 + 760) = a5;
      *(_DWORD *)(a1 + 764) = a6;
      *(_DWORD *)(a1 + 768) = a7;
      *(_QWORD *)(a1 + 776) = v22;
      *(_QWORD *)(a1 + 784) = v23;
      *(_DWORD *)(a1 + 752) = a3;
      *(_DWORD *)(a1 + 756) = a4;
      *(_QWORD *)(a1 + 744) = v9;
      DirectComposition::CResourceMarshaler::AddRef(v9);
      v18 = 0LL;
    }
    if ( v18 )
      DirectComposition::CEvent::`scalar deleting destructor'(v18);
  }
  return (unsigned int)v14;
}
