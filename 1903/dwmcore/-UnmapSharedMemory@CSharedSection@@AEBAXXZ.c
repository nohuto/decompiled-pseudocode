/*
 * XREFs of ?UnmapSharedMemory@CSharedSection@@AEBAXXZ @ 0x1800D311C
 * Callers:
 *     ??1CSharedSection@@UEAA@XZ @ 0x1800D30C0 (--1CSharedSection@@UEAA@XZ.c)
 *     ?OnChanged@CSharedSection@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800D3B80 (-OnChanged@CSharedSection@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSharedSection::UnmapSharedMemory(CSharedSection *this)
{
  char v2; // al
  const void *v3; // rcx
  __int64 v4; // r10
  unsigned int v5; // eax
  unsigned int v6; // edx
  int v7; // ebx
  signed int v8; // eax
  __int64 v9; // rcx
  const void *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 552LL) + 104LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 552LL));
  v3 = (const void *)*((_QWORD *)this + 9);
  if ( !v2 )
    goto LABEL_6;
  v4 = *((_QWORD *)this + 2);
  v10 = (const void *)*((_QWORD *)this + 9);
  v5 = *(_DWORD *)(v4 + 776);
  v6 = v5 + 1;
  if ( v5 + 1 < v5 )
  {
    v7 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v3, 0LL, 0, 0x80070216, 0xB8u, 0LL);
  }
  else
  {
    if ( v6 <= *(_DWORD *)(v4 + 772) )
    {
      *(_QWORD *)(*(_QWORD *)(v4 + 752) + 8LL * v5) = v10;
      *(_DWORD *)(v4 + 776) = v6;
      return;
    }
    v8 = DynArrayImpl<0>::AddMultipleAndSet(v4 + 752, 8, 1, &v10);
    v7 = v8;
    if ( v8 >= 0 )
      return;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xC3u, 0LL);
  }
  if ( v7 < 0 )
  {
    v3 = v10;
LABEL_6:
    UnmapViewOfFile(v3);
  }
}
