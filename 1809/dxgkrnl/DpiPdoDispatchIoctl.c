/*
 * XREFs of DpiPdoDispatchIoctl @ 0x1C0274E60
 * Callers:
 *     <none>
 * Callees:
 *     ?DpiBrightnessHandleIoctls@@YAJPEAU_DEVICE_OBJECT@@KKKPEAXK1PEA_K@Z @ 0x1C026B4F8 (-DpiBrightnessHandleIoctls@@YAJPEAU_DEVICE_OBJECT@@KKKPEAXK1PEA_K@Z.c)
 */

__int64 __fastcall DpiPdoDispatchIoctl(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  unsigned int v5; // edi
  unsigned int v6; // eax
  unsigned __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0LL;
  v8 = 0LL;
  v4 = *(_QWORD *)(a2 + 184);
  if ( *(_DWORD *)(v4 + 24) == 2296832
    || *(_DWORD *)(v4 + 24) == 2296836
    || *(_DWORD *)(v4 + 24) == 2296840
    || *(_DWORD *)(v4 + 24) == 2296844
    || *(_DWORD *)(v4 + 24) == 2296848
    || *(_DWORD *)(v4 + 24) == 2296852
    || *(_DWORD *)(v4 + 24) == 2296856 )
  {
    v6 = DpiBrightnessHandleIoctls(
           *(_QWORD *)(*(_QWORD *)(a1 + 64) + 32LL),
           *(unsigned int *)(*(_QWORD *)(a1 + 64) + 504LL),
           *(_DWORD *)(v4 + 24),
           *(_DWORD *)(v4 + 16),
           *(unsigned __int8 **)(a2 + 24),
           *(_DWORD *)(v4 + 8),
           *(char **)(a2 + 24),
           &v8);
    v3 = v8;
    v5 = v6;
  }
  else
  {
    v5 = -1073741637;
  }
  *(_QWORD *)(a2 + 56) = v3;
  *(_DWORD *)(a2 + 48) = v5;
  IofCompleteRequest((PIRP)a2, 1);
  return v5;
}
