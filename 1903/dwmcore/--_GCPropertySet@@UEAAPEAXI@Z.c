/*
 * XREFs of ??_GCPropertySet@@UEAAPEAXI@Z @ 0x180089470
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1CResource@@MEAA@XZ @ 0x18008AB10 (--1CResource@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

CPropertySet *__fastcall CPropertySet::`scalar deleting destructor'(CPropertySet *this, char a2)
{
  int v2; // r9d
  const struct _TlgProvider_t *v6; // rcx
  int v7; // r9d
  int v8; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+60h] [rbp-18h]
  int v12; // [rsp+64h] [rbp-14h]

  v2 = *((_DWORD *)this + 36);
  *(_QWORD *)this = &CPropertySet::`vftable';
  if ( v2 && dword_18033A240 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 1uLL) )
  {
    v12 = 0;
    v10 = &v8;
    v8 = v7;
    v11 = 4;
    TlgWrite(v6, &unk_1802DD35B, 0LL, 0LL, 3u, &pData);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 112);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 80);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
