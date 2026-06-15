/*
 * XREFs of ?FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180040CB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180068897 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800C6BF8 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 */

__int64 __fastcall CDeviceGraphObjectsStore::FindStreamGroup(
        CDeviceGraphObjectsStore *this,
        const struct StreamGroupParams *a2,
        struct IStreamGroupProxy **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // r12
  const struct StreamGroupParams *v6; // r15
  _QWORD *i; // rdi
  unsigned int v8; // ebx
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  struct IStreamGroupProxy *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rcx
  bool v19; // zf
  int v20; // eax
  __int64 v21; // r14
  __int64 v22; // rax
  unsigned __int16 *v23; // r15
  __int64 v24; // r14
  const void *v25; // rax
  int v26; // eax
  struct IStreamGroupProxy *v27; // rcx
  __int64 v28; // rcx
  char v29; // al
  char v30; // al
  char v31; // al
  unsigned __int8 (__fastcall ***v32)(_QWORD); // rax
  struct IStreamGroupProxy *v33; // rax
  __int64 v34; // rcx
  struct IStreamGroupProxy *v35; // [rsp+20h] [rbp-30h] BYREF
  __int64 v36; // [rsp+28h] [rbp-28h] BYREF
  const struct StreamGroupParams *v37; // [rsp+30h] [rbp-20h]
  char v38[16]; // [rsp+38h] [rbp-18h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  v37 = a2;
  *a3 = 0LL;
  v6 = a2;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  for ( i = (_QWORD *)*((_QWORD *)this + 8); i != *((_QWORD **)this + 9); ++i )
  {
    v10 = *i;
    if ( *i )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 8LL))(*i);
    v11 = 0LL;
    v36 = 0LL;
    if ( !v10
      || (v12 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v10 + 24LL))(
                  v10,
                  &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                  &v36),
          v11 = v36,
          v12 < 0) )
    {
      if ( v11 )
      {
        v36 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
LABEL_13:
      if ( !v10 )
        continue;
      goto LABEL_14;
    }
    if ( !v36 )
      goto LABEL_13;
    v35 = 0LL;
    v13 = Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v36, &v35);
    v14 = v35;
    if ( v13 < 0 )
    {
      if ( v35 )
        goto LABEL_18;
LABEL_19:
      v15 = v36;
      if ( v36 )
      {
        v36 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
LABEL_14:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      continue;
    }
    v16 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v35 + 104LL))(v35);
    v14 = v35;
    if ( *((_QWORD *)v6 + 3) != v16 )
    {
      if ( !v35 )
        goto LABEL_19;
      goto LABEL_18;
    }
    v17 = (_QWORD *)(*(__int64 (__fastcall **)(struct IStreamGroupProxy *, char *))(*(_QWORD *)v35 + 112LL))(v35, v38);
    v18 = *((_QWORD *)v6 + 4) - *v17;
    if ( !v18 )
      v18 = *((_QWORD *)v6 + 5) - v17[1];
    v19 = v18 == 0;
    v14 = v35;
    if ( !v19 )
    {
      if ( !v35 )
        goto LABEL_19;
      goto LABEL_18;
    }
    v20 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v35 + 160LL))(v35);
    v14 = v35;
    if ( *((_DWORD *)v6 + 2) != v20 )
    {
      if ( !v35 )
        goto LABEL_19;
      goto LABEL_18;
    }
    v21 = *((_QWORD *)v6 + 2);
    v22 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v35 + 120LL))(v35);
    v14 = v35;
    if ( *(_WORD *)(v21 + 16) != *(_WORD *)(v22 + 16) )
    {
      if ( !v35 )
        goto LABEL_19;
      goto LABEL_18;
    }
    v23 = (unsigned __int16 *)*((_QWORD *)v6 + 2);
    v24 = v23[8];
    v25 = (const void *)(*(__int64 (**)(void))(*(_QWORD *)v35 + 120LL))();
    v26 = memcmp_0(v23, v25, v24 + 18);
    v27 = v35;
    if ( !v26 )
    {
      v29 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v35 + 136LL))(v35);
      v6 = v37;
      v14 = v35;
      if ( *((_BYTE *)v37 + 49) == v29 )
      {
        v30 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v35 + 152LL))(v35);
        v14 = v35;
        if ( *((_BYTE *)v6 + 48) == v30 )
        {
          v31 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v35 + 240LL))(v35);
          v14 = v35;
          if ( *((_BYTE *)v6 + 50) == v31 )
          {
            v32 = (unsigned __int8 (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v35 + 264LL))(v35);
            if ( *((_QWORD *)v6 + 7) )
            {
              if ( v32 && (**v32)(v32) )
              {
LABEL_56:
                v33 = v35;
                v34 = v36;
                v35 = 0LL;
                *a3 = v33;
                if ( v34 )
                {
                  v36 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
                }
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
                break;
              }
            }
            else if ( !v32 )
            {
              goto LABEL_56;
            }
            v14 = v35;
            if ( !v35 )
              goto LABEL_19;
          }
          else if ( !v35 )
          {
            goto LABEL_19;
          }
        }
        else if ( !v35 )
        {
          goto LABEL_19;
        }
      }
      else if ( !v35 )
      {
        goto LABEL_19;
      }
LABEL_18:
      v35 = 0LL;
      (*(void (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v14 + 16LL))(v14);
      goto LABEL_19;
    }
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v27 + 16LL))(v27);
    }
    v28 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v6 = v37;
  }
  v8 = -2147023728;
  if ( *a3 )
    v8 = 0;
  if ( v3 )
    LeaveCriticalSection(v3);
  return v8;
}
