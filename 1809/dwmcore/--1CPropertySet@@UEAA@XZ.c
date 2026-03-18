/*
 * XREFs of ??1CPropertySet@@UEAA@XZ @ 0x18004E844
 * Callers:
 *     ??_GCPropertySet@@UEAAPEAXI@Z @ 0x18004E8F0 (--_GCPropertySet@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x18004E218 (--1CResource@@MEAA@XZ.c)
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

void __fastcall CPropertySet::~CPropertySet(CPropertySet *this)
{
  int v1; // r9d
  void *v3; // r8
  void *v4; // r8
  const struct _TlgProvider_t *v5; // rcx
  int v6; // r9d
  int v7; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  v1 = *((_DWORD *)this + 36);
  *(_QWORD *)this = &CPropertySet::`vftable';
  if ( v1 && dword_180305E40 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 1uLL) )
  {
    v11 = 0;
    v9 = &v7;
    v7 = v6;
    v10 = 4;
    TlgWrite(v5, &unk_1802B5A5F, 0LL, 0LL, 3u, &pData);
  }
  v3 = (void *)*((_QWORD *)this + 14);
  if ( v3 != *((void **)this + 15) )
  {
    if ( v3 )
      HeapFree(WPF::g_processHeap, 0, v3);
    *((_QWORD *)this + 14) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 10);
  if ( v4 != *((void **)this + 11) )
  {
    if ( v4 )
      HeapFree(WPF::g_processHeap, 0, v4);
    *((_QWORD *)this + 10) = 0LL;
  }
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
