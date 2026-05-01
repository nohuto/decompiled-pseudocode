/*
 * XREFs of ?HampHostQueryProcessDebuggedCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x18003AD80
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     ?HampSystemQueryProcessIsDebuggerAttached@@YAKPEAX@Z @ 0x18003AE44 (-HampSystemQueryProcessIsDebuggerAttached@@YAKPEAX@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall HampHostQueryProcessDebuggedCallback(struct _RM_ACTIVITY_HOST *a1, void *a2, int a3, _DWORD *a4)
{
  unsigned int IsDebuggerAttached; // eax
  unsigned int v8; // [rsp+30h] [rbp-68h] BYREF
  int v9; // [rsp+34h] [rbp-64h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  unsigned int *v11; // [rsp+60h] [rbp-38h]
  int v12; // [rsp+68h] [rbp-30h]
  int v13; // [rsp+6Ch] [rbp-2Ch]
  int *v14; // [rsp+70h] [rbp-28h]
  int v15; // [rsp+78h] [rbp-20h]
  int v16; // [rsp+7Ch] [rbp-1Ch]

  IsDebuggerAttached = HampSystemQueryProcessIsDebuggerAttached(a2);
  if ( IsDebuggerAttached )
    *a4 = 1;
  if ( dword_1800AB2C0 > 5u )
  {
    v13 = 0;
    v16 = 0;
    v8 = IsDebuggerAttached;
    v11 = &v8;
    v14 = &v9;
    v12 = 4;
    v9 = a3;
    v15 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_1800987D1, 0LL, 0LL, 4u, &pData);
  }
  return 0LL;
}
