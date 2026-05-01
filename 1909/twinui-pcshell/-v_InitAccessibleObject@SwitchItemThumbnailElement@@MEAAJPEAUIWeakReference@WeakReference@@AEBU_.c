/*
 * XREFs of ?v_InitAccessibleObject@SwitchItemThumbnailElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x180397C10
 * Callers:
 *     <none>
 * Callees:
 *     ?AccessibleElement_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@W4AccessibleElementFlags@@JAEBU_GUID@@PEAPEAX@Z @ 0x180394944 (-AccessibleElement_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@W4AccessibleElementFlags.c)
 */

__int64 __fastcall SwitchItemThumbnailElement::v_InitAccessibleObject(
        SwitchItemThumbnailElement *this,
        struct IWeakReference *a2,
        struct _GUID *a3,
        void **a4)
{
  return AccessibleElement_CreateInstance((__int64)a2, 13, 50000, a3, a4);
}
