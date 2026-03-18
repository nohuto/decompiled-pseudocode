/*
 * XREFs of NtGdiGetProcessSessionFonts @ 0x1C00C98B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z @ 0x1C00CC230 (-GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 */

__int64 __fastcall NtGdiGetProcessSessionFonts(
        void *a1,
        volatile void *a2,
        unsigned int *a3,
        volatile void *a4,
        unsigned __int64 a5)
{
  PVOID v5; // r13
  PVOID PoolWithTag; // rdi
  unsigned __int16 *v7; // r15
  bool v8; // r14
  __int64 v9; // rcx
  SIZE_T v10; // rbx
  void *v11; // rcx
  unsigned int v12; // esi
  int ProcessSessionFonts; // ebx
  HANDLE *v15; // r14
  __int64 v16; // r12
  ULONG v17; // eax
  char v18; // [rsp+40h] [rbp-88h]
  unsigned int v19; // [rsp+44h] [rbp-84h] BYREF
  unsigned int v20; // [rsp+48h] [rbp-80h]
  unsigned int v21; // [rsp+4Ch] [rbp-7Ch]
  unsigned int v22; // [rsp+50h] [rbp-78h] BYREF
  PVOID v23; // [rsp+58h] [rbp-70h]
  PVOID P; // [rsp+60h] [rbp-68h]
  unsigned __int16 *v25; // [rsp+68h] [rbp-60h]
  SIZE_T NumberOfBytes; // [rsp+70h] [rbp-58h]
  unsigned int v27; // [rsp+78h] [rbp-50h]
  int v28; // [rsp+7Ch] [rbp-4Ch]
  PVOID Object[9]; // [rsp+80h] [rbp-48h] BYREF
  void *v33; // [rsp+E8h] [rbp+20h]

  v33 = (void *)a4;
  v5 = 0LL;
  v23 = 0LL;
  PoolWithTag = 0LL;
  P = 0LL;
  v7 = 0LL;
  v25 = 0LL;
  v8 = 0;
  if ( gSessionId )
    return 0LL;
  if ( ((unsigned __int8)a3 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)(a3 + 1) > MmUserProbeAddress || a3 + 1 < a3 )
    *(_BYTE *)MmUserProbeAddress = 0;
  if ( (a5 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a5 + 4 > MmUserProbeAddress || a5 + 4 < a5 )
    *(_BYTE *)MmUserProbeAddress = 0;
  v21 = *a3;
  v27 = v21;
  v9 = *(unsigned int *)a5;
  v20 = v9;
  v28 = v9;
  v10 = 8LL * v21;
  NumberOfBytes = v10;
  if ( v10 > 0xFFFFFFFF
    || (v11 = (void *)(2 * v9), NumberOfBytes = (SIZE_T)v11, Object[1] = v11, (unsigned __int64)v11 > 0xFFFFFFFF) )
  {
    ExRaiseStatus(-1073741675);
  }
  v12 = (unsigned int)v11;
  if ( (_DWORD)v10 )
  {
    ProbeForWrite(a2, (unsigned int)v10, 4u);
    a4 = v33;
  }
  if ( v12 )
    ProbeForWrite(a4, v12, 4u);
  if ( v21 )
  {
    v18 = 0;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v10, 0x706D7447u);
    P = PoolWithTag;
    if ( PoolWithTag )
    {
      v7 = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x706D7447u);
      v25 = v7;
      if ( v7 )
      {
LABEL_24:
        ProcessSessionFonts = ObReferenceObjectByHandle(a1, 0x40u, (POBJECT_TYPE)PsProcessType, 1, Object, 0LL);
        v5 = Object[0];
        v23 = Object[0];
        if ( ProcessSessionFonts >= 0 )
        {
          ProcessSessionFonts = GetProcessSessionFonts(
                                  (struct _EPROCESS *)Object[0],
                                  v21,
                                  v20,
                                  &v19,
                                  &v22,
                                  (void **)PoolWithTag,
                                  v7);
          if ( ProcessSessionFonts >= 0 )
            v8 = v18 == 0;
          ProbeForWrite(a3, 4uLL, 4u);
          ProbeForWrite((volatile void *)a5, 4uLL, 4u);
          if ( (int)(ProcessSessionFonts + 0x80000000) < 0 || ProcessSessionFonts == -1073741789 )
          {
            *a3 = v19;
            *(_DWORD *)a5 = v22;
          }
          if ( ProcessSessionFonts >= 0 && !v18 )
          {
            memmove((void *)a2, PoolWithTag, 8LL * v19);
            memmove(v33, v7, 2LL * v22);
          }
        }
        if ( ProcessSessionFonts >= 0 )
          goto LABEL_34;
        goto LABEL_48;
      }
    }
    ProcessSessionFonts = -1073741801;
  }
  else
  {
    v18 = 1;
    if ( !a2 && !v33 && !v20 )
      goto LABEL_24;
    ProcessSessionFonts = -1073741811;
  }
LABEL_48:
  if ( v8 && v19 )
  {
    v15 = (HANDLE *)PoolWithTag;
    v16 = v19;
    do
    {
      NtClose(*v15++);
      --v16;
    }
    while ( v16 );
  }
LABEL_34:
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x706D7447u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x706D7447u);
  if ( ProcessSessionFonts < 0 )
  {
    v17 = RtlNtStatusToDosErrorNoTeb(ProcessSessionFonts);
    EngSetLastError(v17);
  }
  return (unsigned int)ProcessSessionFonts;
}
