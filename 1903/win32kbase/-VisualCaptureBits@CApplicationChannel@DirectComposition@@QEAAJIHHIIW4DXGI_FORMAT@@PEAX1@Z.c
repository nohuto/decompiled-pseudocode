/*
 * XREFs of ?VisualCaptureBits@CApplicationChannel@DirectComposition@@QEAAJIHHIIW4DXGI_FORMAT@@PEAX1@Z @ 0x1C01A6804
 * Callers:
 *     NtVisualCaptureBits @ 0x1C01A2FD0 (NtVisualCaptureBits.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0013C00 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     OpenDwmHandle @ 0x1C003E5C4 (OpenDwmHandle.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C0055CB0 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01A5558 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 *     ?Create@CEvent@DirectComposition@@SAJPEAU_KEVENT@@HPEAPEAV12@@Z @ 0x1C01A56F8 (-Create@CEvent@DirectComposition@@SAJPEAU_KEVENT@@HPEAPEAV12@@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::VisualCaptureBits(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        PVOID Object,
        PVOID a9)
{
  int v13; // edi
  unsigned __int64 v14; // rdx
  DirectComposition::CResourceMarshaler *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r9
  DirectComposition::CEvent *v19; // rcx
  DirectComposition::CEvent *v20; // rcx
  int v22; // [rsp+20h] [rbp-38h]
  int v23; // [rsp+20h] [rbp-38h]
  void *v24; // [rsp+30h] [rbp-28h] BYREF
  void *v25; // [rsp+38h] [rbp-20h] BYREF
  DirectComposition::CEvent *v26; // [rsp+60h] [rbp+8h] BYREF

  v26 = 0LL;
  v24 = (void *)-1LL;
  v25 = (void *)-1LL;
  if ( *(int *)(a1 + 24) <= 2 )
  {
    v14 = (unsigned int)(a2 - 1);
    if ( a2 && v14 < *(_QWORD *)(a1 + 80) )
    {
      _mm_lfence();
      v15 = *(DirectComposition::CResourceMarshaler **)(v14 * *(_QWORD *)(a1 + 88) + *(_QWORD *)(a1 + 56));
    }
    else
    {
      v15 = 0LL;
    }
    if ( v15
      && (*(unsigned __int8 (__fastcall **)(DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v15 + 120LL))(
           v15,
           189LL) )
    {
      v13 = DirectComposition::CEvent::Create(Object, v16, &v26);
      if ( v13 < 0
        || (v13 = OpenDwmHandle(Object, (POBJECT_TYPE)ExEventObjectType, 2u, v17, v22, &v24), v13 < 0)
        || (v13 = OpenDwmHandle(a9, MmSectionObjectType, 3u, v18, v23, &v25), v13 < 0) )
      {
        v20 = v26;
      }
      else
      {
        DirectComposition::CApplicationChannel::ReleaseResource(
          (DirectComposition::CApplicationChannel *)a1,
          *(struct DirectComposition::CResourceMarshaler **)(a1 + 744));
        v19 = *(DirectComposition::CEvent **)(a1 + 736);
        if ( v19 )
          DirectComposition::CEvent::`scalar deleting destructor'(v19);
        *(_QWORD *)(a1 + 736) = v26;
        *(_DWORD *)(a1 + 760) = a5;
        *(_DWORD *)(a1 + 764) = a6;
        *(_DWORD *)(a1 + 768) = a7;
        *(_QWORD *)(a1 + 776) = v24;
        *(_QWORD *)(a1 + 784) = v25;
        *(_DWORD *)(a1 + 752) = a3;
        *(_DWORD *)(a1 + 756) = a4;
        *(_QWORD *)(a1 + 744) = v15;
        DirectComposition::CResourceMarshaler::AddRef(v15);
        v20 = 0LL;
      }
      if ( v20 )
        DirectComposition::CEvent::`scalar deleting destructor'(v20);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v13;
}
