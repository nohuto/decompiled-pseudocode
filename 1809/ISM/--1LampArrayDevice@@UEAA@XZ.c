/*
 * XREFs of ??1LampArrayDevice@@UEAA@XZ @ 0x180073D4C
 * Callers:
 *     ??_ELampArrayDevice@@UEAAPEAXI@Z @ 0x180073D00 (--_ELampArrayDevice@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall LampArrayDevice::~LampArrayDevice(LampArrayDevice *this)
{
  char *v2; // rsi
  __int64 *i; // rbx
  char *v4; // rcx
  const struct std::nothrow_t *v5; // rdx
  char *v6; // r8
  char *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rbx

  *(_QWORD *)this = &LampArrayDevice::`vftable';
  v2 = (char *)this + 32;
  for ( i = (__int64 *)*((_QWORD *)this + 4); i != (__int64 *)v2; i = (__int64 *)*i )
  {
    *(_BYTE *)(i[4] + 545) = 0;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)i[2] + 48LL))(i[2]);
  }
  v4 = (char *)*((_QWORD *)this + 20);
  if ( v4 )
  {
    v5 = (const struct std::nothrow_t *)((*((_QWORD *)this + 22) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFFCuLL);
    if ( (unsigned __int64)v5 >= 0x1000 )
    {
      v5 = (const struct std::nothrow_t *)((char *)v5 + 39);
      v6 = (char *)*((_QWORD *)v4 - 1);
      v7 = (char *)(v4 - v6);
      if ( (unsigned __int64)(v7 - 8) > 0x1F )
      {
        v8 = _o__invalid_parameter_noinfo_noreturn(v7, v5);
        goto LABEL_11;
      }
      v4 = v6;
    }
    operator delete(v4, v5);
    *((_QWORD *)this + 20) = 0LL;
    *((_QWORD *)this + 21) = 0LL;
    *((_QWORD *)this + 22) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  while ( 1 )
  {
    i = *(__int64 **)v2;
    v8 = **(_QWORD **)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 )
LABEL_17:
      __fastfail(3u);
LABEL_11:
    if ( *(__int64 **)(v8 + 8) != i )
      goto LABEL_17;
    *(_QWORD *)v2 = v8;
    *(_QWORD *)(v8 + 8) = v2;
    if ( i == (__int64 *)v2 )
      break;
    v9 = i[2];
    if ( v9 )
    {
      i[2] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    operator delete(i, (const struct std::nothrow_t *)0x28);
    --*((_QWORD *)v2 + 2);
  }
  v10 = (volatile signed __int32 *)*((_QWORD *)this + 3);
  if ( v10 )
  {
    *((_QWORD *)this + 3) = 0LL;
    if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
    {
      *((_DWORD *)v10 + 2) = 1;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 32LL))(v10);
      *((_DWORD *)v10 + 2) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v10 + 24LL))(v10, 1LL);
    }
  }
  v11 = (volatile signed __int32 *)*((_QWORD *)this + 2);
  if ( v11 )
  {
    *((_QWORD *)this + 2) = 0LL;
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      *((_DWORD *)v11 + 2) = 1;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 32LL))(v11);
      *((_DWORD *)v11 + 2) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v11 + 24LL))(v11, 1LL);
    }
  }
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
