/*
 * XREFs of ?GetHMonitorFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAPEAUHMONITOR__@@@Z @ 0x1800D2498
 * Callers:
 *     ?TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ @ 0x1800A6A4C (-TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002CB4C (--_U@YAPEAX_K@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18009E924 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??8@YA_NAEBUEdidIdentificationBlock@@0@Z @ 0x1800D2164 (--8@YA_NAEBUEdidIdentificationBlock@@0@Z.c)
 *     ?GetRawEdidIdentificationBlock@DisplayEdidHelpers@@YAJU_LUID@@KPEAUEdidIdentificationBlock@@@Z @ 0x1800D2618 (-GetRawEdidIdentificationBlock@DisplayEdidHelpers@@YAJU_LUID@@KPEAUEdidIdentificationBlock@@@Z.c)
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
             89LL,
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
            102LL,
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
                    (unsigned int)&pt,
                    v9) >= 0
          && operator==((__int64)&pt, (__int64)this) )
        {
          break;
        }
        v11 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v11 >= numPathArrayElements )
          goto LABEL_11;
      }
      pt = *(POINT *)((char *)modeInfoArray + 64 * (unsigned __int64)pathArray[v11].sourceInfo.modeInfoIdx + 28);
      *(_QWORD *)a2 = MonitorFromPoint(pt, 0);
    }
LABEL_11:
    v10 = 0;
  }
  if ( pathArray )
    operator delete(pathArray, v8);
  if ( modeInfoArray )
    operator delete(modeInfoArray, v8);
  return v10;
}
