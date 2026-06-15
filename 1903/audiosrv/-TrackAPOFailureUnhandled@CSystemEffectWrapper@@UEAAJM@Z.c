/*
 * XREFs of ?TrackAPOFailureUnhandled@CSystemEffectWrapper@@UEAAJM@Z @ 0x18013AD00
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001C6E0 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z @ 0x1801383AC (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::TrackAPOFailureUnhandled(
        CSystemEffectWrapper *this,
        float a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // edx
  char *v6; // rdi
  int v7; // eax
  const WCHAR *v8; // rdx
  LPCGUID v9; // r8
  TraceLoggingHProvider v10; // r9
  int v12; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  int *v14; // [rsp+60h] [rbp-48h]
  int v15; // [rsp+68h] [rbp-40h]
  int v16; // [rsp+6Ch] [rbp-3Ch]
  char *v17; // [rsp+70h] [rbp-38h]
  int v18; // [rsp+78h] [rbp-30h]
  int v19; // [rsp+7Ch] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-28h] BYREF

  v4 = *((_DWORD *)this + 12);
  if ( (unsigned int)(v4 - 1) <= 2 )
  {
    v6 = (char *)this + 24;
    TrackSystemEffectBehavior(*((_QWORD *)this + 5), v4, a3, a4, (__int64)this + 24, a2);
    if ( *(_DWORD *)g_SysFxUtilTlp > 2u )
    {
      v7 = *((_DWORD *)this + 12);
      v16 = 0;
      v19 = 0;
      v8 = (const WCHAR *)*((_QWORD *)this + 5);
      v12 = v7;
      v14 = &v12;
      v15 = 4;
      v17 = v6;
      v18 = 16;
      TlgCreateWsz(&pDesc, v8);
      TlgWrite(v10, &unk_18017CFB0, v9, (LPCGUID)v10, 5u, &pData);
    }
  }
  return 0LL;
}
