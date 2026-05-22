/*
 * XREFs of ?GetHMonitorFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAPEAUHMONITOR__@@@Z @ 0x18009D184
 * Callers:
 *     ?TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ @ 0x18006A378 (-TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180064E88 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?GetRawEdidIdentificationBlock@DisplayEdidHelpers@@YAJU_LUID@@KPEAUEdidIdentificationBlock@@@Z @ 0x18009CF18 (-GetRawEdidIdentificationBlock@DisplayEdidHelpers@@YAJU_LUID@@KPEAUEdidIdentificationBlock@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18012C95C (--_U@YAPEAX_K@Z.c)
 */

__int64 __fastcall DisplayEdidHelpers::GetHMonitorFromEdid(
        DisplayEdidHelpers *this,
        const struct EdidIdentificationBlock *a2,
        HMONITOR *a3)
{
  unsigned int DisplayConfigBufferSizes; // eax
  unsigned int v7; // eax
  const struct std::nothrow_t *v8; // rdx
  struct EdidIdentificationBlock *v9; // r9
  unsigned int v10; // ebx
  __int64 v11; // rbx
  DISPLAYCONFIG_PATH_INFO *pathArray; // [rsp+30h] [rbp-20h]
  POINT pt; // [rsp+38h] [rbp-18h] BYREF
  __int16 v14; // [rsp+40h] [rbp-10h]
  void *modeInfoArray; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  UINT32 numPathArrayElements; // [rsp+80h] [rbp+30h] BYREF
  UINT32 numModeInfoArrayElements; // [rsp+88h] [rbp+38h] BYREF

  numPathArrayElements = 0;
  numModeInfoArrayElements = 0;
  DisplayConfigBufferSizes = GetDisplayConfigBufferSizes(2u, &numPathArrayElements, &numModeInfoArrayElements);
  if ( DisplayConfigBufferSizes )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x59,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\inputconfiguration\\inputconfigurationhelpers.cpp",
             (const char *)DisplayConfigBufferSizes);
  pathArray = (DISPLAYCONFIG_PATH_INFO *)operator new[](saturated_mul(numPathArrayElements, 0x48uLL));
  modeInfoArray = operator new[](saturated_mul(numModeInfoArrayElements, 0x40uLL));
  v7 = QueryDisplayConfig(
         2u,
         &numPathArrayElements,
         pathArray,
         &numModeInfoArrayElements,
         (DISPLAYCONFIG_MODE_INFO *)modeInfoArray,
         0LL);
  if ( v7 )
  {
    v10 = wil::details::in1diag3::Return_Win32(
            retaddr,
            (void *)0x66,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\inputconfiguration\\inputconfigurationhelpers.cpp",
            (const char *)v7);
  }
  else
  {
    v11 = 0LL;
    if ( numPathArrayElements )
    {
      while ( 1 )
      {
        pt = 0LL;
        v14 = 0;
        if ( (int)DisplayEdidHelpers::GetRawEdidIdentificationBlock(
                    *(DisplayEdidHelpers **)&pathArray[v11].sourceInfo.adapterId,
                    (struct _LUID)pathArray[v11].targetInfo.id,
                    (__int64)&pt,
                    v9) >= 0
          && pt.x == *(_DWORD *)this
          && pt.y == *((_DWORD *)this + 1)
          && v14 == *((_WORD *)this + 4) )
        {
          break;
        }
        v11 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v11 >= numPathArrayElements )
          goto LABEL_13;
      }
      pt = *(POINT *)((char *)modeInfoArray + 64 * (unsigned __int64)pathArray[v11].sourceInfo.modeInfoIdx + 28);
      *(_QWORD *)a2 = MonitorFromPoint(pt, 0);
    }
LABEL_13:
    v10 = 0;
  }
  if ( pathArray )
    operator delete(pathArray, v8);
  if ( modeInfoArray )
    operator delete(modeInfoArray, v8);
  return v10;
}
