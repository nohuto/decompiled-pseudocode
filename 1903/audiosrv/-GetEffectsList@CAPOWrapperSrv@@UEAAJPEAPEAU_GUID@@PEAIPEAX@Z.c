/*
 * XREFs of ?GetEffectsList@CAPOWrapperSrv@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x180138840
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAPOWrapperSrv::GetEffectsList(
        CAPOWrapperSrv *this,
        struct _GUID **a2,
        const GUID *a3,
        const GUID *a4)
{
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v10; // rax
  unsigned int v11; // [rsp+30h] [rbp-39h] BYREF
  int v12; // [rsp+34h] [rbp-35h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  const char *v14; // [rsp+60h] [rbp-9h]
  int v15; // [rsp+68h] [rbp-1h]
  int v16; // [rsp+6Ch] [rbp+3h]
  int *v17; // [rsp+70h] [rbp+7h]
  int v18; // [rsp+78h] [rbp+Fh]
  int v19; // [rsp+7Ch] [rbp+13h]
  unsigned int *v20; // [rsp+80h] [rbp+17h]
  int v21; // [rsp+88h] [rbp+1Fh]
  int v22; // [rsp+8Ch] [rbp+23h]

  v6 = *((_QWORD *)this + 10);
  if ( !v6 )
  {
    result = 2147500033LL;
    v11 = -2147467263;
LABEL_9:
    if ( (unsigned int)dword_1801B64B8 > 2 )
    {
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v14 = "CAPOWrapperSrv::GetEffectsList";
      v17 = &v12;
      v20 = &v11;
      v15 = 31;
      v12 = 351;
      v18 = 4;
      v21 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1801B64B8, &unk_18017CDBD, a3, a4, 5u, &pData);
      return v11;
    }
    return result;
  }
  if ( a4 )
  {
    v10 = *((_QWORD *)this + 11);
    if ( v10 && v10 != -1 )
    {
      CloseHandle(*((HANDLE *)this + 11));
      v6 = *((_QWORD *)this + 10);
    }
    *((_QWORD *)this + 11) = a4;
  }
  result = (*(__int64 (__fastcall **)(__int64, struct _GUID **, const GUID *, const GUID *))(*(_QWORD *)v6 + 24LL))(
             v6,
             a2,
             a3,
             a4);
  v11 = result;
  if ( (int)result < 0 )
    goto LABEL_9;
  return result;
}
