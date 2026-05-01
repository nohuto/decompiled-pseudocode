/*
 * XREFs of ?RmpLogTerminationForWerCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180061110
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall RmpLogTerminationForWerCallback(struct _RM_ACTIVITY_HOST *a1, void *a2, unsigned int a3, void *a4)
{
  int v5; // eax
  unsigned int v7; // ebx
  int v8; // eax
  unsigned int v9; // r9d
  const struct _TlgProvider_t *v10; // rcx
  unsigned int v12; // [rsp+30h] [rbp-29h] BYREF
  unsigned int v13; // [rsp+34h] [rbp-25h] BYREF
  __int64 v14; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  unsigned int *v16; // [rsp+60h] [rbp+7h]
  int v17; // [rsp+68h] [rbp+Fh]
  int v18; // [rsp+6Ch] [rbp+13h]
  __int64 *v19; // [rsp+70h] [rbp+17h]
  int v20; // [rsp+78h] [rbp+1Fh]
  int v21; // [rsp+7Ch] [rbp+23h]
  int *v22; // [rsp+80h] [rbp+27h]
  int v23; // [rsp+88h] [rbp+2Fh]
  int v24; // [rsp+8Ch] [rbp+33h]

  v5 = (unsigned __int16)*((_DWORD *)a1 + 174);
  if ( v5 == 256 )
  {
    v7 = 0;
  }
  else if ( v5 == 512 )
  {
    v7 = 4;
  }
  else
  {
    v7 = 2;
    if ( v5 != 2048 )
      v7 = 4;
  }
  v8 = WerpAddTerminationReason(a3, v7, L"HAM", 0LL);
  v9 = 0;
  if ( v8 < 0 )
    v9 = WerpAddTerminationReason(a3, v7, L"HAM", 0LL) | 0xC0000000;
  v12 = v9;
  if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
  {
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v16 = &v12;
    v14 = *((_QWORD *)a1 + 4);
    v19 = &v14;
    v22 = (int *)&v13;
    v17 = 4;
    v20 = 8;
    v13 = a3;
    v23 = 4;
    TlgWrite(v10, &unk_180086F84, 0LL, 0LL, 5u, &pData);
    return v12;
  }
  return v9;
}
