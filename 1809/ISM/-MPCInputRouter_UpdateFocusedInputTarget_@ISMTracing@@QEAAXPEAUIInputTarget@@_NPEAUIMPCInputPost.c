/*
 * XREFs of ?MPCInputRouter_UpdateFocusedInputTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@_NPEAUIMPCInputPostProcessor@@@Z @ 0x180009F68
 * Callers:
 *     ?UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180006460 (-UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x180009DF0 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     ?GetVIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x180009EAC (-GetVIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall ISMTracing::MPCInputRouter_UpdateFocusedInputTarget_(
        ISMTracing *this,
        struct IInputTarget *a2,
        char a3,
        struct IMPCInputPostProcessor *a4)
{
  _DWORD *v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C8h] BYREF
  int PIDOfTarget; // [rsp+48h] [rbp-C0h] BYREF
  int v17; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v18; // [rsp+50h] [rbp-B8h] BYREF
  struct IInputTarget *v19; // [rsp+58h] [rbp-B0h] BYREF
  struct IMPCInputPostProcessor *v20; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+68h] [rbp-A0h] BYREF
  struct IInputTarget *v22; // [rsp+70h] [rbp-98h]
  __int64 v23; // [rsp+78h] [rbp-90h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-80h] BYREF
  char *v25; // [rsp+A8h] [rbp-60h]
  __int64 v26; // [rsp+B0h] [rbp-58h]
  struct IInputTarget **v27; // [rsp+B8h] [rbp-50h]
  __int64 v28; // [rsp+C0h] [rbp-48h]
  struct IMPCInputPostProcessor **v29; // [rsp+C8h] [rbp-40h]
  __int64 v30; // [rsp+D0h] [rbp-38h]
  int *p_PIDOfTarget; // [rsp+D8h] [rbp-30h]
  __int64 v32; // [rsp+E0h] [rbp-28h]
  __int64 *v33; // [rsp+E8h] [rbp-20h]
  __int64 v34; // [rsp+F0h] [rbp-18h]
  int *v35; // [rsp+F8h] [rbp-10h]
  __int64 v36; // [rsp+100h] [rbp-8h]
  __int64 *v37; // [rsp+108h] [rbp+0h]
  __int64 v38; // [rsp+110h] [rbp+8h]
  char v39; // [rsp+158h] [rbp+50h] BYREF

  v39 = a3;
  v23 = -2LL;
  v6 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v6 )
  {
    if ( *v6 )
    {
      v7 = *((_QWORD *)ISMTracing::Instance() + 1);
      if ( *(_DWORD *)v7 > 4u && (*(_BYTE *)(v7 + 16) & 1) != 0 && (*(_QWORD *)(v7 + 24) & 1LL) == *(_QWORD *)(v7 + 24) )
      {
        v25 = &v39;
        v26 = 1LL;
        v19 = a2;
        v27 = &v19;
        v28 = 8LL;
        v20 = a4;
        v29 = &v20;
        v30 = 8LL;
        PIDOfTarget = ISMTracing::GetPIDOfTarget(a2);
        p_PIDOfTarget = &PIDOfTarget;
        v32 = 4LL;
        v8 = 0LL;
        v15 = 0LL;
        if ( a2 )
        {
          v22 = a2;
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 8LL))(a2);
          v14 = 0LL;
          v9 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a2)(
                 a2,
                 &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
                 &v14);
          v10 = v14;
          if ( v9 >= 0 && v14 )
          {
            (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 64LL))(v14, &v15);
            v10 = v14;
          }
          if ( v10 )
          {
            v14 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
          }
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 16LL))(a2);
          v8 = v15;
        }
        v21 = v8;
        v33 = &v21;
        v34 = 8LL;
        v11 = 0;
        LODWORD(v14) = 0;
        if ( a2 )
        {
          v22 = a2;
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 8LL))(a2);
          v15 = 0LL;
          v12 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a2)(
                  a2,
                  &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
                  &v15);
          v13 = v15;
          if ( v12 >= 0 && v15 )
          {
            (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 56LL))(v15, &v14);
            v13 = v15;
          }
          if ( v13 )
          {
            v15 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
          }
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 16LL))(a2);
          v11 = v14;
        }
        v17 = v11;
        v35 = &v17;
        v36 = 4LL;
        LODWORD(v18) = ISMTracing::GetVIDOfTarget(a2);
        v37 = &v18;
        v38 = 4LL;
        TlgWrite((TraceLoggingHProvider)v7, &unk_180166194, 0LL, 0LL, 9u, &pData);
      }
    }
  }
}
