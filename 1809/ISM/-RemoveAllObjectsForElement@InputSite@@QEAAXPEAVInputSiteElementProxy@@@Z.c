/*
 * XREFs of ?RemoveAllObjectsForElement@InputSite@@QEAAXPEAVInputSiteElementProxy@@@Z @ 0x1800213A4
 * Callers:
 *     ??_GInputSiteElementProxy@@UEAAPEAXI@Z @ 0x18001ECC0 (--_GInputSiteElementProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall InputSite::RemoveAllObjectsForElement(InputSite *this, struct InputSiteElementProxy *a2)
{
  __int64 *v2; // rdi
  __int64 i; // rbx
  __int64 *v5; // r14
  char *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 *v9; // rbp
  char *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // rdi
  __int64 v14; // rcx
  char v15; // [rsp+50h] [rbp+8h] BYREF
  struct InputSiteElementProxy *v16; // [rsp+58h] [rbp+10h]

  v16 = a2;
  v2 = (__int64 *)*((_QWORD *)this + 50);
  for ( i = *((_QWORD *)this + 49); (__int64 *)i != v2 && *(struct InputSiteElementProxy **)i != a2; i += 16LL )
    ;
  if ( (__int64 *)i != v2 )
  {
    v5 = (__int64 *)(i + 16);
    if ( (__int64 *)(i + 16) != v2 )
    {
      v6 = (char *)(i + 24);
      do
      {
        if ( (struct InputSiteElementProxy *)*v5 != a2 )
        {
          *(_QWORD *)i = *v5;
          v7 = 0LL;
          if ( &v15 != v6 )
          {
            v7 = *(_QWORD *)v6;
            *(_QWORD *)v6 = 0LL;
          }
          v8 = *(_QWORD *)(i + 8);
          *(_QWORD *)(i + 8) = v7;
          if ( v8 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
          a2 = v16;
          i += 16LL;
        }
        v5 += 2;
        v6 += 16;
      }
      while ( v5 != v2 );
    }
    if ( (__int64 *)i != v2 )
    {
      v9 = (__int64 *)*((_QWORD *)this + 50);
      if ( v2 != v9 )
      {
        v10 = (char *)(v2 + 1);
        do
        {
          *(_QWORD *)i = *v2;
          v11 = 0LL;
          if ( &v15 != v10 )
          {
            v11 = *(_QWORD *)v10;
            *(_QWORD *)v10 = 0LL;
          }
          v12 = *(_QWORD *)(i + 8);
          *(_QWORD *)(i + 8) = v11;
          if ( v12 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
          i += 16LL;
          v2 += 2;
          v10 += 16;
        }
        while ( v2 != v9 );
        v9 = (__int64 *)*((_QWORD *)this + 50);
      }
      if ( (__int64 *)i != v9 )
      {
        v13 = (__int64 *)(i + 8);
        do
        {
          v14 = *v13;
          if ( *v13 )
          {
            *v13 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
          }
          v13 += 2;
        }
        while ( v13 - 1 != v9 );
      }
      *((_QWORD *)this + 50) = i;
    }
  }
}
