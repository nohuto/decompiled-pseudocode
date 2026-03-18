/*
 * XREFs of EngAllocUserMemEx @ 0x1C008DD74
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00440A0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     EngAllocUserMem @ 0x1C008DD50 (EngAllocUserMem.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C003323C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0033270 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C00AA88C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     GrepSecureVirtualMemory @ 0x1C00ABE90 (GrepSecureVirtualMemory.c)
 *     GrepUnsecureVirtualMemory @ 0x1C00ABEC0 (GrepUnsecureVirtualMemory.c)
 */

__int64 __fastcall EngAllocUserMemEx(ULONG_PTR a1, int a2, PVOID *a3)
{
  const struct reg_FeatureDescriptor *v5; // rcx
  NTSTATUS v6; // esi
  int v7; // eax
  PVOID v8; // rcx
  HANDLE v9; // rax
  __int64 v10; // rcx
  void *v11; // rdi
  __int64 CurrentProcessWin32Process; // rax
  const struct reg_FeatureDescriptor *v13; // rcx
  __int64 v14; // r14
  const struct reg_FeatureDescriptor *v15; // rcx
  _QWORD Buffer[4]; // [rsp+30h] [rbp-20h] BYREF
  ULONG_PTR RegionSize; // [rsp+80h] [rbp+30h] BYREF
  int NewElement; // [rsp+88h] [rbp+38h] BYREF
  char v19; // [rsp+90h] [rbp+40h] BYREF

  NewElement = a2;
  RegionSize = a1;
  *a3 = 0LL;
  if ( !a1 )
    return 3221225473LL;
  v6 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a3, 0LL, &RegionSize, 0x3000u, 4u);
  if ( v6 >= 0 )
  {
    v7 = EvaluateCurrentState(v5);
    v8 = *a3;
    if ( v7 )
      v9 = (HANDLE)GrepSecureVirtualMemory(v8, RegionSize, 4LL);
    else
      v9 = MmSecureVirtualMemory(v8, RegionSize, 4u);
    v11 = v9;
    if ( v9 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
      v14 = CurrentProcessWin32Process;
      if ( !CurrentProcessWin32Process )
      {
        if ( (unsigned int)EvaluateCurrentState(v13) )
          GrepUnsecureVirtualMemory(v11);
        else
          MmUnsecureVirtualMemory(v11);
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a3, &RegionSize, 0x8000u);
        *a3 = 0LL;
        return 3221225473LL;
      }
      Buffer[0] = *a3;
      Buffer[1] = RegionSize;
      LOBYTE(NewElement) = 0;
      Buffer[2] = v11;
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v19, (struct _EX_PUSH_LOCK *)(CurrentProcessWin32Process + 80));
      if ( !RtlInsertElementGenericTableAvl((PRTL_AVL_TABLE)(v14 + 88), Buffer, 0x18u, (PBOOLEAN)&NewElement)
        || !(_BYTE)NewElement )
      {
        if ( (unsigned int)EvaluateCurrentState(v15) )
          GrepUnsecureVirtualMemory(v11);
        else
          MmUnsecureVirtualMemory(v11);
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a3, &RegionSize, 0x8000u);
        *a3 = 0LL;
        v6 = -1073741801;
      }
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v19);
    }
    else
    {
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a3, &RegionSize, 0x8000u);
      *a3 = 0LL;
      return (unsigned int)-2143354876;
    }
  }
  return (unsigned int)v6;
}
