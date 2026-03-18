/*
 * XREFs of NtGdiExtTextOutW @ 0x1C0035300
 * Callers:
 *     <none>
 * Callees:
 *     GreExtTextOutRect @ 0x1C00324C4 (GreExtTextOutRect.c)
 *     GreExtTextOutWInternal @ 0x1C007F108 (GreExtTextOutWInternal.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 */

__int64 __fastcall NtGdiExtTextOutW(
        HDC a1,
        int a2,
        int a3,
        unsigned int a4,
        struct tagRECT *a5,
        __int64 a6,
        unsigned int a7,
        void *Src,
        unsigned int a9)
{
  struct tagRECT *v10; // rbx
  __int64 v11; // rax
  const void *v12; // rdx
  unsigned int v13; // r15d
  unsigned int v14; // r12d
  __int64 v15; // rcx
  __int64 v16; // r14
  int *v17; // rdi
  ULONG64 v18; // rcx
  unsigned __int64 v19; // rdx
  int *v20; // r15
  char *v21; // rdi
  size_t v22; // r8
  unsigned int v23; // esi
  int *v28; // [rsp+98h] [rbp-150h]
  unsigned int v29; // [rsp+B8h] [rbp-130h]
  struct tagRECT v30; // [rsp+C8h] [rbp-120h] BYREF
  int v31; // [rsp+E0h] [rbp-108h] BYREF

  v10 = a5;
  v11 = a6;
  v12 = Src;
  v30 = (struct tagRECT)0LL;
  if ( a7 > 0xFFFF )
    return 0LL;
  if ( a5 )
  {
    if ( (a4 & 6) != 0 )
    {
      if ( (unsigned __int64)a5 >= MmUserProbeAddress )
        v10 = (struct tagRECT *)MmUserProbeAddress;
      v30 = *v10;
      v10 = &v30;
      v11 = a6;
    }
    else
    {
      v10 = 0LL;
    }
  }
  if ( !a7 )
  {
    if ( v10 && (a4 & 2) != 0 )
      return (unsigned int)GreExtTextOutRect(a1, v10);
    else
      return 1;
  }
  if ( (a4 & 6) != 0 && !v10 || !v11 )
    return 0;
  v13 = 0;
  v14 = (30 * a7 + 7) & 0xFFFFFFF8;
  if ( Src )
  {
    v13 = 4 * a7;
    if ( (a4 & 0x2000) != 0 )
      v13 = 8 * a7;
  }
  v29 = v13 + 7;
  v15 = v14 + 2 * a7 + ((v13 + 7) & 0xFFFFFFF8);
  if ( (unsigned int)v15 <= 0xC0 )
  {
    v16 = 0LL;
    v17 = &v31;
LABEL_16:
    if ( v12 )
    {
      if ( v13 )
      {
        v18 = (ULONG64)v12 + v13;
        if ( v18 > MmUserProbeAddress || v18 < (unsigned __int64)v12 )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(v17, v12, v13);
      v19 = a6;
      v20 = v17;
      v17 = (int *)((char *)v17 + (v29 & 0xFFFFFFF8));
    }
    else
    {
      v20 = (int *)Src;
      v19 = a6;
    }
    v28 = v17;
    v21 = (char *)v17 + v14;
    v22 = 2LL * (int)a7;
    if ( v22 )
    {
      if ( (v19 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v22 + v19 > MmUserProbeAddress || v22 + v19 < v19 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v21, (const void *)v19, v22);
    v23 = GreExtTextOutWInternal(a1, a2, a3, a4, v10, (unsigned __int16 *)v21, a7, v20, v28, a9);
    if ( v16 )
      FreeTmpBuffer(v16);
    return v23;
  }
  v16 = AllocFreeTmpBuffer(v15);
  v17 = (int *)v16;
  if ( v16 )
  {
    v12 = Src;
    goto LABEL_16;
  }
  return 0LL;
}
