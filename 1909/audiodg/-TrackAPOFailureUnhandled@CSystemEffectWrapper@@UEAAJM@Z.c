/*
 * XREFs of ?TrackAPOFailureUnhandled@CSystemEffectWrapper@@UEAAJM@Z @ 0x140043810
 * Callers:
 *     <none>
 * Callees:
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z @ 0x140007D0C (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z.c)
 *     _TlgWrite @ 0x140014224 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1400143CC (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x140015E90 (__security_check_cookie.c)
 */

__int64 __fastcall CSystemEffectWrapper::TrackAPOFailureUnhandled(CSystemEffectWrapper *this, float a2)
{
  unsigned int v2; // edx
  char *v4; // rdi
  int v5; // eax
  const WCHAR *v6; // rdx
  LPCGUID v7; // r9
  TraceLoggingHProvider v8; // r10
  int v10; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  int *v12; // [rsp+60h] [rbp-48h]
  int v13; // [rsp+68h] [rbp-40h]
  int v14; // [rsp+6Ch] [rbp-3Ch]
  char *v15; // [rsp+70h] [rbp-38h]
  int v16; // [rsp+78h] [rbp-30h]
  int v17; // [rsp+7Ch] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-28h] BYREF

  v2 = *((_DWORD *)this + 12);
  if ( v2 - 1 <= 2 )
  {
    v4 = (char *)this + 24;
    TrackSystemEffectBehavior(*((_QWORD *)this + 5), v2, 0, 1, (__int64)this + 24, SLODWORD(a2));
    if ( *(_DWORD *)g_SysFxUtilTlp > 2u )
    {
      v5 = *((_DWORD *)this + 12);
      v14 = 0;
      v17 = 0;
      v6 = (const WCHAR *)*((_QWORD *)this + 5);
      v10 = v5;
      v12 = &v10;
      v13 = 4;
      v15 = v4;
      v16 = 16;
      TlgCreateWsz(&pDesc, v6);
      TlgWrite(v8, &unk_14006FD51, 0LL, v7, 5u, &pData);
    }
  }
  return 0LL;
}
