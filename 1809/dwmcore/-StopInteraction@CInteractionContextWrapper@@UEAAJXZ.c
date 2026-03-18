/*
 * XREFs of ?StopInteraction@CInteractionContextWrapper@@UEAAJXZ @ 0x1801F4A50
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInteractionContextWrapper::StopInteraction(CInteractionContextWrapper *this)
{
  __int64 v2; // rcx
  unsigned int v3; // r9d
  __int64 v4; // rdx
  __int64 v5; // r8
  const struct _TlgProvider_t *v6; // rcx
  UINT32 cData; // r10d
  int v9; // [rsp+30h] [rbp-9h] BYREF
  CInteractionContextWrapper *v10; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  CInteractionContextWrapper **v12; // [rsp+60h] [rbp+27h]
  int v13; // [rsp+68h] [rbp+2Fh]
  int v14; // [rsp+6Ch] [rbp+33h]
  int *v15; // [rsp+70h] [rbp+37h]
  UINT32 v16; // [rsp+78h] [rbp+3Fh]
  int v17; // [rsp+7Ch] [rbp+43h]

  v2 = *((_QWORD *)this + 3);
  v3 = v2 == 0 ? 0x8007139F : 0;
  v9 = v3;
  if ( v2 )
  {
    v9 = StopInteractionContext();
    v3 = v9;
    if ( v9 >= 0 )
    {
      (*(void (__fastcall **)(CInteractionContextWrapper *, __int64, __int64, _QWORD))(*(_QWORD *)this + 64LL))(
        this,
        v4,
        v5,
        (unsigned int)v9);
      v3 = v9;
    }
  }
  if ( dword_180305E40 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 2uLL) )
  {
    v14 = 0;
    v17 = 0;
    v12 = &v10;
    v15 = &v9;
    v10 = this;
    v13 = 8;
    v16 = cData;
    TlgWrite(v6, &unk_1802B8188, 0LL, 0LL, cData, &pData);
    return (unsigned int)v9;
  }
  return v3;
}
