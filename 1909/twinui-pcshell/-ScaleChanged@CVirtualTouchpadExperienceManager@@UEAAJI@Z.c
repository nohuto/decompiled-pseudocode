/*
 * XREFs of ?ScaleChanged@CVirtualTouchpadExperienceManager@@UEAAJI@Z @ 0x1801C8DD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::ScaleChanged(CVirtualTouchpadExperienceManager *this)
{
  if ( *((_BYTE *)this + 277) )
    return 0LL;
  else
    return CVirtualTouchpadExperienceManager::HandleScaleOrMonitorChange((CVirtualTouchpadExperienceManager *)((char *)this - 24));
}
