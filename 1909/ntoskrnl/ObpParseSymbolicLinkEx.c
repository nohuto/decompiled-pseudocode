/*
 * XREFs of ObpParseSymbolicLinkEx @ 0x14061C5A0
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140002880 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetHostSilo @ 0x140015DF0 (PsGetHostSilo.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByPointer @ 0x1400870C0 (ObReferenceObjectByPointer.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlIsSandboxedToken @ 0x1405D82D0 (RtlIsSandboxedToken.c)
 */

__int64 __fastcall ObpParseSymbolicLinkEx(
        unsigned __int16 *Object,
        POBJECT_TYPE ObjectType,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        char a4,
        int a5,
        __int64 a6,
        unsigned __int16 *a7,
        int a8,
        int a9,
        __int64 a10,
        unsigned __int16 **a11)
{
  unsigned __int16 *v14; // r14
  int v15; // eax
  __int64 v16; // rbx
  unsigned __int16 *v17; // r15
  unsigned int v18; // ebp
  int v19; // eax
  unsigned __int16 v20; // bx
  __int64 v21; // rsi
  unsigned __int16 v22; // r13
  char *PoolWithTag; // r12
  char *v24; // rcx
  unsigned __int16 *v25; // rcx
  unsigned __int16 **v26; // rax
  NTSTATUS v28; // eax
  int v29; // ebx
  _QWORD v30[2]; // [rsp+30h] [rbp-38h] BYREF
  PVOID Objecta; // [rsp+70h] [rbp+8h] BYREF

  v30[0] = 0LL;
  v30[1] = 0LL;
  Objecta = 0LL;
  if ( (*((_DWORD *)Object + 7) & 2) != 0 && !RtlIsSandboxedToken(a3 + 1, a4) )
  {
    v29 = -1073741772;
    goto LABEL_24;
  }
  v14 = a7;
  if ( *a7 )
  {
    if ( **((_WORD **)a7 + 1) != 92 )
    {
      v29 = -1073741788;
      goto LABEL_24;
    }
  }
  else if ( ObjectType == ObpSymbolicLinkObjectType
         && ((*((_DWORD *)Object + 7) & 1) == 0 || !PsIsCurrentThreadInServerSilo()) )
  {
    v28 = ObReferenceObjectByPointer(Object, 0, ObjectType, a4);
    v29 = v28;
    if ( v28 >= 0 )
    {
      *a11 = Object;
LABEL_24:
      if ( Objecta )
        ObfDereferenceObject(Objecta);
      return (unsigned int)v29;
    }
    if ( v28 != -1073741788 )
      goto LABEL_24;
  }
  v15 = *((_DWORD *)Object + 7);
  v16 = a10;
  if ( (v15 & 8) != 0 )
  {
    *(_DWORD *)(a10 + 4) &= *((_DWORD *)Object + 8);
    v15 = *((_DWORD *)Object + 7);
  }
  if ( (v15 & 4) != 0 )
  {
    *(_QWORD *)(v16 + 8) = PsGetHostSilo();
    v15 = *((_DWORD *)Object + 7);
  }
  v17 = Object + 4;
  if ( (v15 & 0x10) != 0 )
  {
    v29 = (*(__int64 (__fastcall **)(unsigned __int16 *, _QWORD, _QWORD *, PVOID *))v17)(
            Object,
            *((_QWORD *)Object + 2),
            v30,
            &Objecta);
    if ( v29 < 0 )
      goto LABEL_24;
    v17 = (unsigned __int16 *)v30;
  }
  v18 = *v17;
  if ( *v17
    && *(_WORD *)(*((_QWORD *)v17 + 1) + 2 * ((unsigned __int64)*v17 >> 1) - 2) == 92
    && *v14
    && **((_WORD **)v14 + 1) == 92 )
  {
    v18 -= 2;
  }
  v19 = *v14;
  v20 = v19 + v18;
  if ( v19 + v18 > 0xFFF0 )
  {
    v29 = -1073741562;
    goto LABEL_24;
  }
  v21 = a6;
  v22 = *(_WORD *)(a6 + 2);
  if ( v22 <= v20 )
  {
    v22 = v20 + 2;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(v19 + v18 + 2), 0x6D4E624Fu);
    if ( !PoolWithTag )
    {
      v29 = -1073741670;
      goto LABEL_24;
    }
    LOWORD(v19) = *v14;
  }
  else
  {
    PoolWithTag = *(char **)(a6 + 8);
  }
  if ( (_WORD)v19 )
    memmove(&PoolWithTag[v18], *((const void **)v14 + 1), (unsigned __int16)v19);
  memmove(PoolWithTag, *((const void **)v17 + 1), v18);
  *(_WORD *)&PoolWithTag[2 * ((unsigned __int64)v20 >> 1)] = 0;
  v24 = *(char **)(v21 + 8);
  if ( PoolWithTag != v24 && v24 )
    ExFreePoolWithTag(v24, 0);
  v25 = (unsigned __int16 *)Objecta;
  v26 = a11;
  *(_QWORD *)(v21 + 8) = PoolWithTag;
  *(_WORD *)v21 = v20;
  *(_WORD *)(v21 + 2) = v22;
  if ( v25 )
  {
    *v26 = v25;
    return 280LL;
  }
  else
  {
    *v26 = Object;
    if ( (*((_DWORD *)Object + 7) & 1) != 0 )
      return 872LL;
    else
      return 260LL;
  }
}
