/*
 * XREFs of ?ConfigureInteractionContext@CInteractionContextWrapper@@AEAAJPEAUHINTERACTIONCONTEXT__@@AEBUSetupInfo@@@Z @ 0x1802324C4
 * Callers:
 *     ?ApplySetupInfo@CInteractionContextWrapper@@UEAAJAEBUSetupInfo@@@Z @ 0x180232320 (-ApplySetupInfo@CInteractionContextWrapper@@UEAAJAEBUSetupInfo@@@Z.c)
 *     ?EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ @ 0x180232930 (-EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInteractionContextWrapper::ConfigureInteractionContext(
        CInteractionContextWrapper *this,
        struct HINTERACTIONCONTEXT__ *a2,
        const struct SetupInfo *a3)
{
  struct HINTERACTIONCONTEXT__ *v5; // r15
  bool v6; // r13
  bool v7; // r12
  bool v8; // r14
  bool v9; // di
  __int64 v10; // rdx
  __int64 v11; // rdx
  int v12; // r9d
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  unsigned int v18; // edi
  const struct _TlgProvider_t *v19; // rcx
  int v20; // r10d
  _DWORD *v21; // rax
  bool v23; // [rsp+30h] [rbp-99h]
  int v24; // [rsp+34h] [rbp-95h] BYREF
  unsigned int v25; // [rsp+38h] [rbp-91h] BYREF
  unsigned int v26; // [rsp+3Ch] [rbp-8Dh] BYREF
  unsigned int v27; // [rsp+40h] [rbp-89h] BYREF
  CInteractionContextWrapper *v28; // [rsp+48h] [rbp-81h] BYREF
  _DWORD v29[8]; // [rsp+50h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-59h] BYREF
  CInteractionContextWrapper **v31; // [rsp+90h] [rbp-39h]
  int v32; // [rsp+98h] [rbp-31h]
  int v33; // [rsp+9Ch] [rbp-2Dh]
  unsigned int *v34; // [rsp+A0h] [rbp-29h]
  int v35; // [rsp+A8h] [rbp-21h]
  int v36; // [rsp+ACh] [rbp-1Dh]
  unsigned int *v37; // [rsp+B0h] [rbp-19h]
  int v38; // [rsp+B8h] [rbp-11h]
  int v39; // [rsp+BCh] [rbp-Dh]
  unsigned int *v40; // [rsp+C0h] [rbp-9h]
  int v41; // [rsp+C8h] [rbp-1h]
  int v42; // [rsp+CCh] [rbp+3h]
  int *v43; // [rsp+D0h] [rbp+7h]
  int v44; // [rsp+D8h] [rbp+Fh]
  int v45; // [rsp+DCh] [rbp+13h]

  v5 = a2;
  v23 = *(_DWORD *)a3 == 2 && (*((_BYTE *)a3 + 4) & 0x40) != 0
     || *(_DWORD *)a3 == 3 && (*((_BYTE *)a3 + 4) & 0x40) != 0
     || *(_DWORD *)a3 == 4 && (*((_BYTE *)a3 + 4) & 0x40) != 0
     || *(_DWORD *)a3 == 6 && (*((_BYTE *)a3 + 4) & 0x40) != 0;
  v6 = *(_DWORD *)a3 == 2 && (*((_BYTE *)a3 + 4) & 0x80) != 0
    || *(_DWORD *)a3 == 3 && (*((_BYTE *)a3 + 4) & 0x80) != 0
    || *(_DWORD *)a3 == 4 && (*((_BYTE *)a3 + 4) & 0x80) != 0
    || *(_DWORD *)a3 == 6 && (*((_BYTE *)a3 + 4) & 0x80) != 0;
  v7 = *(_DWORD *)a3 == 2 && (*((_BYTE *)a3 + 4) & 3) != 0
    || *(_DWORD *)a3 == 3 && (*((_BYTE *)a3 + 4) & 3) != 0
    || *(_DWORD *)a3 == 4 && (*((_BYTE *)a3 + 4) & 3) != 0
    || *(_DWORD *)a3 == 6 && (*((_BYTE *)a3 + 4) & 3) != 0;
  v8 = *(_DWORD *)a3 == 2 && (*((_BYTE *)a3 + 4) & 0xC) != 0
    || *(_DWORD *)a3 == 3 && (*((_BYTE *)a3 + 4) & 0xC) != 0
    || *(_DWORD *)a3 == 4 && (*((_BYTE *)a3 + 4) & 0xC) != 0
    || *(_DWORD *)a3 == 6 && (*((_BYTE *)a3 + 4) & 0xC) != 0;
  v9 = *(_DWORD *)a3 == 2 && (*((_BYTE *)a3 + 4) & 0x30) != 0
    || *(_DWORD *)a3 == 3 && (*((_BYTE *)a3 + 4) & 0x30) != 0
    || *(_DWORD *)a3 == 4 && (*((_BYTE *)a3 + 4) & 0x30) != 0
    || *(_DWORD *)a3 == 6 && (*((_BYTE *)a3 + 4) & 0x30) != 0;
  if ( *(_DWORD *)a3 == 3 )
  {
    if ( v7 && (*((_BYTE *)a3 + 16) & 2) != 0 )
      LOBYTE(a2) = 1;
    else
      a2 = 0LL;
    (*(void (__fastcall **)(CInteractionContextWrapper *, struct HINTERACTIONCONTEXT__ *))(*(_QWORD *)this + 56LL))(
      this,
      a2);
    if ( v8 && (*((_BYTE *)a3 + 16) & 2) != 0 )
      LOBYTE(v10) = 1;
    else
      v10 = 0LL;
    (*(void (__fastcall **)(CInteractionContextWrapper *, __int64))(*(_QWORD *)this + 64LL))(this, v10);
    if ( v9 && (*((_BYTE *)a3 + 16) & 4) != 0 )
      LOBYTE(v11) = 1;
    else
      v11 = 0LL;
    (*(void (__fastcall **)(CInteractionContextWrapper *, __int64))(*(_QWORD *)this + 72LL))(this, v11);
  }
  v12 = ResetInteractionContext(v5);
  if ( v12 >= 0 )
  {
    v12 = SetPropertyInteractionContext(v5, 1LL);
    if ( v12 >= 0 )
    {
      v12 = SetPropertyInteractionContext(v5, 3LL);
      if ( v12 >= 0 )
      {
        v24 = SetPropertyInteractionContext(v5, 2LL);
        v12 = v24;
        if ( v24 >= 0 )
        {
          v13 = ((~*((_BYTE *)a3 + 16) & 8) << 8) | 1;
          if ( *((float *)a3 + 2) != 0.0 )
            v13 = ((~*((_BYTE *)a3 + 16) & 8) << 8) | 0x101;
          if ( *((float *)a3 + 3) != 0.0 )
            v13 |= 0x200u;
          v14 = v13 | 2;
          if ( !v7 )
            v14 = v13;
          v15 = v14 | 4;
          if ( !v8 )
            v15 = v14;
          v16 = v15 | 0x10;
          if ( !v9 )
            v16 = v15;
          v17 = v16 | 0x10000000;
          if ( *(_DWORD *)a3 != 3 )
            v17 = v16;
          v18 = v17 | 0x40000000;
          if ( (*((_BYTE *)a3 + 16) & 1) == 0 )
            v18 = v17;
          if ( *((_DWORD *)a3 + 5) == 1 )
          {
            v18 = v18 & 0x7FFFFCFF | 0x80000100;
          }
          else if ( *((_DWORD *)a3 + 5) == 2 )
          {
            v18 = v18 & 0x7FFFFCFF | 0x80000200;
          }
          v29[0] = 1;
          v29[1] = v18;
          v29[2] = 2;
          v29[4] = 4;
          v29[3] = v23 ? 0x80000001 : 0;
          v29[5] = v6 ? 0x80000001 : 0;
          v24 = SetInteractionConfigurationInteractionContext(v5, 3LL, v29, (unsigned int)v24);
          v12 = v24;
          if ( dword_180337240 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_180337240, 2uLL) )
          {
            v33 = 0;
            v36 = 0;
            v39 = 0;
            v42 = 0;
            v45 = 0;
            v31 = &v28;
            v34 = &v25;
            v37 = &v26;
            v40 = &v27;
            v43 = &v24;
            v28 = this;
            v32 = 8;
            v25 = v18;
            v35 = v20;
            v26 = v23 ? 0x80000001 : 0;
            v38 = v20;
            v27 = v6 ? 0x80000001 : 0;
            v41 = v20;
            v44 = v20;
            TlgWrite(v19, &unk_1802DD041, 0LL, 0LL, 7u, &pData);
            v12 = v24;
          }
          if ( v12 >= 0 )
          {
            v12 = RegisterOutputCallbackInteractionContext(
                    v5,
                    CInteractionContextWrapper::s_InteractionContextCallback,
                    this);
            if ( v12 >= 0 )
            {
              if ( (v21 = (_DWORD *)((char *)this + 32), !v23) && *v21 == 2 || !v6 && *v21 == 4 )
              {
                *v21 = 0;
                *((_DWORD *)this + 9) = 0;
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v12;
}
