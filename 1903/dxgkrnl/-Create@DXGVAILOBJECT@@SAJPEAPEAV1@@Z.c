/*
 * XREFs of ?Create@DXGVAILOBJECT@@SAJPEAPEAV1@@Z @ 0x1C028FFA4
 * Callers:
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1C025E5E0 (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ?Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJPEAV1@PEAXPEAPEAVIDxgkCompositionObject@@@Z3PEAPEAX@Z @ 0x1C0018D28 (-Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJP.c)
 *     ?AllocateDefaultSecurityDescriptor@DXGVAILOBJECT@@SAJKPEAPEAX@Z @ 0x1C028F82C (-AllocateDefaultSecurityDescriptor@DXGVAILOBJECT@@SAJKPEAPEAX@Z.c)
 *     ?ResolveHandle@DXGVAILOBJECT@@SAJPEAXKDPEAPEAV1@@Z @ 0x1C0291078 (-ResolveHandle@DXGVAILOBJECT@@SAJPEAXKDPEAPEAV1@@Z.c)
 */

__int64 __fastcall DXGVAILOBJECT::Create(struct DXGVAILOBJECT **a1)
{
  int DefaultSecurityDescriptor; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  void *v7; // rdi
  __int64 v8; // rbx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rax
  _DWORD v13[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v14; // [rsp+58h] [rbp-28h]
  __int64 v15; // [rsp+60h] [rbp-20h]
  int v16; // [rsp+68h] [rbp-18h]
  int v17; // [rsp+6Ch] [rbp-14h]
  void *v18; // [rsp+70h] [rbp-10h]
  __int64 v19; // [rsp+78h] [rbp-8h]
  HANDLE Handle; // [rsp+A0h] [rbp+20h] BYREF
  void *v21; // [rsp+A8h] [rbp+28h] BYREF

  *a1 = 0LL;
  v21 = 0LL;
  Handle = 0LL;
  DefaultSecurityDescriptor = DXGVAILOBJECT::AllocateDefaultSecurityDescriptor(0xC0060000, (struct _ACL **)&v21);
  v7 = v21;
  v8 = DefaultSecurityDescriptor;
  if ( DefaultSecurityDescriptor < 0 )
    goto LABEL_4;
  v13[1] = 0;
  v17 = 0;
  v14 = 0LL;
  v16 = 0;
  v15 = 0LL;
  v19 = 0LL;
  v13[0] = 48;
  v18 = v21;
  v9 = DxgkCompositionObject::Create(
         0LL,
         (__int64)v13,
         0xC0060000,
         v6,
         3,
         128,
         (__int64 (__fastcall *)(PVOID, __int64, char *))DXGVAILOBJECT::ObjectInit,
         0LL,
         &Handle);
  v8 = v9;
  if ( v9 < 0 || (v10 = DXGVAILOBJECT::ResolveHandle(Handle, v3, v5, a1), v8 = v10, v10 < 0) )
  {
LABEL_4:
    v11 = WdLogNewEntry5_WdWarning(v4, v3, v5);
    *(_QWORD *)(v11 + 24) = v8;
    WdLogEvent5_WdWarning(v11);
  }
  if ( Handle )
    ObCloseHandle(Handle, 1);
  if ( v7 )
    operator delete[](v7);
  return (unsigned int)v8;
}
