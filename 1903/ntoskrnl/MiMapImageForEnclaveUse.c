/*
 * XREFs of MiMapImageForEnclaveUse @ 0x140894B78
 * Callers:
 *     MiInitializeVsmEnclave @ 0x140894294 (MiInitializeVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140894788 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140009B60 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x140009C6C (MiDereferenceControlAreaFile.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     MiSectionControlArea @ 0x1400717E0 (MiSectionControlArea.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     MiValidateSectionCreate @ 0x14065BE44 (MiValidateSectionCreate.c)
 *     MmMapViewOfSection @ 0x14067A6E0 (MmMapViewOfSection.c)
 */

NTSTATUS __fastcall MiMapImageForEnclaveUse(HANDLE Handle, __int64 a2, KPROCESSOR_MODE a3, __int64 *a4, _QWORD *a5)
{
  NTSTATUS result; // eax
  _DWORD *v10; // rbp
  unsigned __int64 v11; // rax
  _DWORD *v12; // rsi
  int v13; // edi
  ULONG_PTR v14; // rbx
  PVOID Object; // [rsp+50h] [rbp-88h] BYREF
  __int64 v16; // [rsp+58h] [rbp-80h] BYREF
  _BYTE v17[48]; // [rsp+60h] [rbp-78h] BYREF

  memset(v17, 0, sizeof(v17));
  result = ObReferenceObjectByHandle(Handle, 4u, MmSectionObjectType, a3, &Object, 0LL);
  if ( result >= 0 )
  {
    v10 = Object;
    v11 = MiSectionControlArea((__int64)Object);
    v12 = (_DWORD *)v11;
    if ( (v10[14] & 0x20) != 0 )
    {
      if ( (*(_DWORD *)(v11 + 92) & 0xC0000) != 0 )
        goto LABEL_9;
      if ( (*(_QWORD *)(*(_QWORD *)(v11 + 96) + 40LL) & 0xFFFFFFFFFFFFFFF8uLL) <= 8 )
      {
        v14 = MiReferenceControlAreaFile(v11);
        v13 = MiValidateSectionCreate(v14, v12, 0xFFFFFFFF, a2, 0x40000000, 4, 0);
        MiDereferenceControlAreaFile((__int64)v12, v14);
        if ( v13 < 0 )
          goto LABEL_10;
        if ( (v12[23] & 0xC0000) != 0 )
        {
LABEL_9:
          KiStackAttachProcess((_KPROCESS *)PsSecureSystemProcess, 0, (__int64)v17);
          v16 = 0LL;
          Object = 0LL;
          v13 = MmMapViewOfSection((__int64)v10, PsSecureSystemProcess, a4, 0LL, 0LL, &v16, (__int64 *)&Object, 1, 0, 2);
          KiUnstackDetachProcess((struct _KTHREAD *)v17, 0);
          *a5 = v12;
          goto LABEL_10;
        }
      }
      v13 = -1073740760;
    }
    else
    {
      v13 = -1073741751;
    }
LABEL_10:
    ObfDereferenceObject(v10);
    return v13;
  }
  return result;
}
