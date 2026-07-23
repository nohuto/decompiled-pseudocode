/*
 * XREFs of sub_1800757D8 @ 0x1800757D8
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180075100 (RtlQueryProcessDebugInformation.c)
 *     RtlDestroyQueryDebugBuffer @ 0x1800757A0 (RtlDestroyQueryDebugBuffer.c)
 *     RtlSetProcessDebugInformation @ 0x1800D7B10 (RtlSetProcessDebugInformation.c)
 * Callees:
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenProcess @ 0x18009CBA0 (ZwOpenProcess.c)
 *     ZwMapViewOfSection @ 0x18009CBE0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x18009CC20 (ZwUnmapViewOfSection.c)
 */

NTSTATUS __fastcall sub_1800757D8(__int64 a1, void *a2, int a3, HANDLE *a4)
{
  void *v4; // rax
  __int64 v5; // r14
  __int64 v10; // rcx
  HANDLE v11; // rdx
  PVOID *v12; // rdi
  ULONG_PTR v13; // r8
  __int128 v14; // xmm0
  _OWORD *v15; // rbx
  NTSTATUS result; // eax
  NTSTATUS v17; // eax
  NTSTATUS v18; // edi
  NTSTATUS v19; // esi
  HANDLE v20; // rdx
  HANDLE Handle; // [rsp+58h] [rbp-39h] BYREF
  ULONG_PTR ViewSize; // [rsp+60h] [rbp-31h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+68h] [rbp-29h] BYREF
  _CLIENT_ID v24; // [rsp+70h] [rbp-21h] BYREF
  _CLIENT_ID ClientId; // [rsp+80h] [rbp-11h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-1h] BYREF
  HANDLE ProcessHandle; // [rsp+F8h] [rbp+67h] BYREF

  v4 = *(void **)(a1 + 48);
  v5 = a1 + *(_QWORD *)(a1 + 88);
  ObjectAttributes.Length = 48;
  memset(&ObjectAttributes.RootDirectory, 0, 20);
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( v4 )
  {
    v24.UniqueProcess = v4;
    v24.UniqueThread = 0LL;
    result = ZwOpenProcess(&Handle, 0x1FFFFFu, &ObjectAttributes, &v24);
    if ( result < 0 )
      return result;
    v10 = (__int64)Handle;
  }
  else
  {
    v10 = -1LL;
    Handle = (HANDLE)-1LL;
  }
  if ( a2 )
  {
    ClientId.UniqueProcess = a2;
    ClientId.UniqueThread = 0LL;
    v17 = ZwOpenProcess(&ProcessHandle, 0x1FFFFFu, &ObjectAttributes, &ClientId);
    v10 = (__int64)Handle;
    v18 = v17;
    if ( v17 < 0 )
    {
      if ( Handle != (HANDLE)-1LL )
        ZwClose(Handle);
      return v18;
    }
    v11 = ProcessHandle;
  }
  else
  {
    v11 = 0LL;
    ProcessHandle = 0LL;
  }
  v12 = (PVOID *)(a1 + 16);
  if ( v10 == -1 )
  {
    v13 = *(_QWORD *)(a1 + 88);
    *v12 = (PVOID)(v13 + *(_QWORD *)(a1 + 8));
  }
  else
  {
    if ( *v12 )
    {
      ZwUnmapViewOfSection((HANDLE)v10, *v12);
      v10 = (__int64)Handle;
      *v12 = 0LL;
    }
    ZwClose((HANDLE)v10);
    v13 = *(_QWORD *)(a1 + 88);
    v11 = ProcessHandle;
  }
  ViewSize = v13;
  SectionOffset.QuadPart = v13;
  if ( v11 )
  {
    v19 = ZwMapViewOfSection(
            *(HANDLE *)a1,
            v11,
            (PVOID *)(a1 + 16),
            0LL,
            0LL,
            &SectionOffset,
            &ViewSize,
            ViewUnmap,
            0,
            4u);
    if ( v19 == -1073741800 )
    {
      v20 = ProcessHandle;
      *v12 = 0LL;
      v19 = ZwMapViewOfSection(
              *(HANDLE *)a1,
              v20,
              (PVOID *)(a1 + 16),
              0LL,
              0LL,
              &SectionOffset,
              &ViewSize,
              ViewUnmap,
              0,
              4u);
    }
    if ( v19 < 0 )
    {
      ZwClose(ProcessHandle);
      return v19;
    }
    if ( a4 )
      *a4 = ProcessHandle;
    else
      ZwClose(ProcessHandle);
  }
  *(_QWORD *)(a1 + 48) = a2;
  *(_QWORD *)(a1 + 24) = a1 - (_QWORD)*v12;
  if ( a3 == 1 )
  {
    *(_DWORD *)v5 = 0;
    *(_DWORD *)(v5 + 4) = *(_DWORD *)v12;
    *(_DWORD *)(v5 + 8) = *(_DWORD *)v12;
    *(_DWORD *)(v5 + 12) = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(v5 + 16) = *(_DWORD *)(a1 + 32);
    *(_DWORD *)(v5 + 20) = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(v5 + 24) = *(_DWORD *)(a1 + 48);
    *(_DWORD *)(v5 + 28) = *(_DWORD *)(a1 + 56);
    *(_DWORD *)(v5 + 32) = *(_DWORD *)(a1 + 64);
    *(_DWORD *)(v5 + 36) = *(_DWORD *)(a1 + 72);
    *(_DWORD *)(v5 + 40) = *(_DWORD *)(a1 + 80);
    *(_DWORD *)(v5 + 44) = *(_DWORD *)(a1 + 88);
    *(_DWORD *)(v5 + 80) = *(_DWORD *)(a1 + 160);
  }
  else
  {
    *(_OWORD *)v5 = *(_OWORD *)a1;
    *(_OWORD *)(v5 + 16) = *(_OWORD *)(a1 + 16);
    *(_OWORD *)(v5 + 32) = *(_OWORD *)(a1 + 32);
    *(_OWORD *)(v5 + 48) = *(_OWORD *)(a1 + 48);
    *(_OWORD *)(v5 + 64) = *(_OWORD *)(a1 + 64);
    *(_OWORD *)(v5 + 80) = *(_OWORD *)(a1 + 80);
    *(_OWORD *)(v5 + 96) = *(_OWORD *)(a1 + 96);
    v14 = *(_OWORD *)(a1 + 112);
    v15 = (_OWORD *)(a1 + 128);
    *(_OWORD *)(v5 + 112) = v14;
    *(_OWORD *)(v5 + 128) = *v15;
    *(_OWORD *)(v5 + 144) = v15[1];
    *(_OWORD *)(v5 + 160) = v15[2];
    *(_OWORD *)(v5 + 176) = v15[3];
    *(_OWORD *)(v5 + 192) = v15[4];
    *(_QWORD *)(v5 + 8) = *(_QWORD *)(v5 + 16);
    *(_QWORD *)v5 = 0LL;
  }
  return 0;
}
